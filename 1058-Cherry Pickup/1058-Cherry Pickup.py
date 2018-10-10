class Solution:
    """
    @param grid: a grid
    @return: the maximum number of cherries possible
    """
    def cherryPickup(self, grid):
        # Write your code here
        N = len(grid)
        dp = [[0] * N for _ in range(N)]
        dp[0][0] = grid[0][0]
        for k in range(1, 2 * N - 1):
            for i in range(N - 1, -1, -1):
                for p in range(N - 1, -1, -1):
                    j = k - i
                    q = k - p
                    if j < 0 or j >= N or q < 0 or q >= N or grid[i][j] == -1 or grid[p][q] == -1:
                        dp[i][p] = -1
                        continue
                    
                    dp[i][p] = max(dp[r][c]
                                   for r in (i - 1, i) for c in (p - 1, p)
                                   if r >= 0 and c >= 0)
                    if dp[i][p] != -1:
                        dp[i][p] += grid[i][j] + (grid[p][q] if i != p else 0)

        return max(0, dp[N - 1][N - 1])
