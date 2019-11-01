import heapq
class Solution:
    """
    @param grid: the grid
    @return: the least time you can reach the bottom right square
    """
    def swimInWater(self, grid):
        # Write your code here
        N = len(grid)
        pq = [(grid[0][0], 0, 0)]
        visited = set([0])
        result = grid[0][0]
        while pq:
            t, row, col = heapq.heappop(pq)
            result = max(result, t)
            if row == col == N - 1:
                break
            for nr, nc in (row-1, col), (row+1, col), (row, col-1), (row, col+1):
                if 0 <= nr < N and 0 <= nc < N and nr * N + nc not in visited:
                    heapq.heappush(pq, (grid[nr][nc], nr, nc))
                    visited.add(nr * N + nc)
        
        return result
