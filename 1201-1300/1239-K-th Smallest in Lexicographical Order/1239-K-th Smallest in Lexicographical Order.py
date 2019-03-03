class Solution:
    """
    @param n: a integer
    @param k: a integer
    @return: return a integer
    """
    def findKthNumber(self, n, k):
        # write your code here
        def calSteps(n, n1, n2):
            steps = 0
            while n1 <= n:
                steps += min(n + 1, n2) - n1
                n1 *= 10
                n2 *= 10
            return steps
        
        curr = 1
        k -= 1
        while k:
            steps = calSteps(n, curr, curr + 1)
            if steps <= k:
                k -= steps
                curr += 1
            else:
                curr *= 10
                k -= 1
        return curr
