class Solution1:
    """
    @param A: a list of integers
    @param K: a integer
    @return: return two integers
    """
    def kthSmallestPrimeFraction(self, A, K):
        # write your code here
        from fractions import Fraction
        def under(x):
            count = res = left = 0
            for right in range(1, len(A)):
                while A[left] < x * A[right]:
                    left += 1
                count += left
                if left > 0:
                    res = max(res, Fraction(A[left - 1], A[right]))
            return count, res
        low, high = 0.0, 1.0
        while high - low > 1e-8:
            mid = (low + high) / 2
            count, res = under(mid)
            if count < K:
                low = mid
            else:
                ans = res
                high = mid
        return ans.numerator, ans.denominator

class Solution2:
    """
    @param A: a list of integers
    @param K: a integer
    @return: return two integers
    """
    def kthSmallestPrimeFraction(self, A, K):
        # write your code here
        import heapq
        pq = [(A[0] / A[i], 0, i) for i in range(len(A) - 1, 0, -1)]
        for _ in range(K - 1):
            frac, p, q = heapq.heappop(pq)
            p += 1
            if p < q:
                heapq.heappush(pq, (A[p] / A[q], p, q))
        return A[pq[0][1]], A[pq[0][2]]