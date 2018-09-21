class Solution:
    """
    @param poured: an integer
    @param query_row: an integer
    @param query_glass: an integer
    @return: return a double
    """
    def champagneTower(self, poured, query_row, query_glass):
        # write your code here
        dp = [[0] * k for k in range(1, query_row + 3)]
        dp[0][0] = poured
        for i in range(query_row + 1):
            for j in range(i + 1):
                if dp[i][j] > 1:
                    dp[i + 1][j] += (dp[i][j] - 1) / 2
                    dp[i + 1][j + 1] += (dp[i][j] - 1) / 2
                    dp[i][j] = 1
        return float(dp[query_row][query_glass])
