class Solution:
    """
    @param A: an array
    @return: is the number of global inversions is equal to the number of local inversions
    """
    def isIdealPermutation(self, A):
        # Write your code here
        maxNum = A[0]
        for i in range(0, len(A) - 2):
            maxNum = max(maxNum, A[i])
            if maxNum > A[i + 2]:
                return False
        return True
