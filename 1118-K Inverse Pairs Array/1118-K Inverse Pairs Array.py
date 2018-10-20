class Solution:
    """
    @param n: a integer
    @param k: a integer
    @return: return a integer
    """
    def kInversePairs(self, n, k):
        # write your code here
        presum = [0] * (1 + k)
        MOD = 1000000007
        for i in range(1, 1 + n):
            temp = [1] + [0] * k
            for j in range(1, 1 + k):
                val = (presum[j] - (presum[j - i] if j >= i else 0)) % MOD
                temp[j] = (temp[j - 1] + val) % MOD
            presum = temp
        return (presum[k] - (presum[k - 1] if k > 0 else 0)) % MOD
