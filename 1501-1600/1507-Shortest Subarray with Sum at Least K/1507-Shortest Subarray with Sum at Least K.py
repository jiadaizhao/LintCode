import collections
class Solution:
    """
    @param A: the array
    @param K: sum
    @return: the length
    """
    def shortestSubarray(self, A, K):
        # Write your code here.
        presum = [0] * (1 + len(A))
        for i in range(len(A)):
            presum[i + 1] = presum[i] + A[i]
            
        minLen = len(A) + 1
        dq = collections.deque()
        for i in range(len(presum)):
            while dq and presum[i] - presum[dq[0]] >= K:
                minLen = min(minLen, i - dq.popleft())
                
            while dq and presum[i] <= presum[dq[-1]]:
                dq.pop()
            dq.append(i)
            
        return minLen if minLen <= len(A) else -1
