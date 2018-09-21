class Solution:
    """
    @param A: an array
    @param B: an array
    @return: the minimum number of swaps to make both sequences strictly increasing
    """
    def minSwap(self, A, B):
        # Write your code here
        preserve0, swap0 = 0, 1
        for i in range(1, len(A)):
            if A[i - 1] < A[i] and B[i - 1] < B[i]:
                preserve1 = preserve0
                swap1 = swap0 + 1
            else:
                preserve1 = len(A)
                swap1 = len(A)
            if A[i - 1] < B[i] and B[i - 1] < A[i]:
                preserve1 = min(preserve1, swap0)
                swap1 = min(swap1, preserve0 + 1)
            preserve0 = preserve1
            swap0 = swap1
        return min(preserve0, swap0)