class Solution:
    """
    @param m: a integer
    @param n: a integer
    @param k: a integer
    @return: return a integer
    """
    def findKthNumber(self, m, n, k):
        # write your code here
        if m > n:
            m, n = n, m
        low = 1
        high = m * n
        while low < high:
            mid = (low + high) // 2
            count = 0
            for i in range(1, m + 1):
                count += min(mid // i, n)
            if count < k:
                low = mid + 1
            else:
                high = mid
        return low
