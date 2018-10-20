class Solution:
    """
    @param word1: a string
    @param word2: a string
    @return: return a integer
    """
    def minDistance(self, word1, word2):
        # write your code here
        dp = [j for j in range(len(word2) + 1)]
        for i, c1 in enumerate(word1):
            temp = [0] * (len(word2) + 1)
            temp[0] = i + 1
            for j, c2 in enumerate(word2):
                if c1 == c2:
                    temp[j + 1] = dp[j]
                else:
                    temp[j + 1] = 1 + min(dp[j + 1], temp[j])
            dp = temp
        return dp[len(word2)]
