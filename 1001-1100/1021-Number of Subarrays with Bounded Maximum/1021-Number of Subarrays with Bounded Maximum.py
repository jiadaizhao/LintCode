class Solution:
    """
    @param A: an array
    @param L: an integer
    @param R: an integer
    @return: the number of subarrays such that the value of the maximum array element in that subarray is at least L and at most R
    """
    def numSubarrayBoundedMax(self, A, L, R):
        # Write your code here
        count = 0
        left, right = -1, -1
        for i in range(len(A)):
            if A[i] >= L:
                right = i
            if A[i] > R:
                left = i
            count += right - left
        return count
