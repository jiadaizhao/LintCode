class Solution:
    """
    @param K: an integer
    @return: how many non-negative integers x have the property that f(x) = K
    """
    def preimageSizeFZF(self, K):
        # Write your code here
        def trailingZeros(n):
            count = 0
            while n > 0:
                count += n // 5
                n //= 5
            return count
        low, high = K, 10 * K + 1
        while low < high:
            mid = (low + high) // 2
            count = trailingZeros(mid)
            if count < K:
                low = mid + 1
            elif count > K:
                high = mid
            else:
                return 5
        return 0
