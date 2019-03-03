class Solution:
    """
    @param list: The coins
    @param k: The k
    @return: The answer
    """
    def takeCoins(self, list, k):
        # Write your code here
        n = len(list)
        presum = [0] * (1 + n)
        for i in range(n):
            presum[i + 1] = presum[i] + list[i]
            
        return max(presum[i] + presum[n] - presum[n - k + i] for i in range(k + 1))
