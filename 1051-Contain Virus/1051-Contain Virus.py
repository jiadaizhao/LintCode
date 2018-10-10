class Solution:
    """
    @param grid: the given 2-D world
    @return: the number of walls
    """
    def containVirus(self, grid):
        # Write your code here
        wall = 0
        m = len(grid)
        n = len(grid[0])
        def dfs(r, c, regions, frontiers, perimeters, visited):
            visited.add((r, c))
            regions[-1].append((r, c))
            for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
                if 0 <= nr < m and 0 <= nc < n:
                    if (nr, nc) not in visited and grid[nr][nc] == 1:
                        dfs(nr, nc, regions, frontiers, perimeters, visited)
                    elif grid[nr][nc] == 0:
                        frontiers[-1].add((nr, nc))
                        perimeters[-1] += 1
        
        while True:
            regions = []
            frontiers = []
            perimeters = []
            visited = set()
            for i, row in enumerate(grid):
                for j, cell in enumerate(row):
                    if cell == 1 and (i, j) not in visited:
                        regions.append([])
                        frontiers.append(set())
                        perimeters.append(0)
                        dfs(i, j, regions, frontiers, perimeters, visited)
                        
            if len(regions) == 0:
                break                
                
            maxP = frontiers.index(max(frontiers, key = len))    
            wall += perimeters[maxP]
            for i, region in enumerate(regions):
                for r, c in region:
                    if i == maxP:
                        grid[r][c] = -1
                    else:
                        for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
                            if 0 <= nr < m and 0 <= nc < n and grid[nr][nc] == 0:
                                grid[nr][nc] = 1
        return wall
