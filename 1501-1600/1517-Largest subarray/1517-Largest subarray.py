class Solution:
    """
    @param A: the array
    @param K: the length 
    @return: the largest subarray
    """
    def largestSubarray(self, A, K):
        # Write your code here.
        N = len(A)
        maxStart = 0
        maxA = curr = A[:K]
        for i in range(K, N):
            curr = curr[1:] + [A[i]]
            if curr > maxA:
                maxA = curr
                
        return maxA
