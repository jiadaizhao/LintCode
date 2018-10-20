class Solution:
    """
    @param num: an integer
    @return: the number of non-negative integers less than or equal to n
    """
    def findIntegers(self, num):
        # Write your code here
        dp = [0] * 31
        dp[0] = 1
        dp[1] = 2
        for i in range(2, len(dp)):
            dp[i] = dp[i - 1] + dp[i - 2]
            
        prev = 0
        count = 0
        for i in range(30, -1, -1):
            if num & (1 << i):
                count += dp[i]
                if prev == 1:
                    return count
                prev = 1
            else:
                prev = 0
        return count + 1
