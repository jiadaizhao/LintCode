class Solution:
    """
    @param grid: a 2D array
    @return: the maximum area of an island in the given 2D array
    """
    def maxAreaOfIsland(self, grid):
        # Write your code here
        maxArea = 0
        m = len(grid)
        n = len(grid[0])
        def dfs(r, c):
            if grid[r][c] == 0:
                return 0
            total = 1
            grid[r][c] = 0
            for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
                if 0 <= nr < m and 0 <= nc < n:
                    total += dfs(nr, nc)
            return total
        
        for i, row in enumerate(grid):
            for j, val in enumerate(row):
                if val == 1:
                    maxArea = max(maxArea, dfs(i, j))
        return maxArea
