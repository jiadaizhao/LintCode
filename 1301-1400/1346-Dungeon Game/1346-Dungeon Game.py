class Solution:
    """
    @param dungeon: a 2D array
    @return: return a integer
    """
    def calculateMinimumHP(self, dungeon):
        # write your code here
        m = len(dungeon)
        n = len(dungeon[0])
        dp = [0] * n + [1]
        for j in range(n - 1, -1, -1):
            dp[j] = max(1, dp[j + 1] - dungeon[-1][j])
            
        for i in range(m - 2, -1, -1):
            dp[n - 1] = max(1, dp[n - 1] - dungeon[i][n - 1])
            for j in range(n - 2, -1, -1):
                dp[j] = max(1, min(dp[j + 1], dp[j]) - dungeon[i][j])
        return dp[0]
