class Solution:
    """
    @param A: an array
    @return: the maximum value of F(0), F(1), ..., F(n-1)
    """
    def maxRotateFunction(self, A):
        # Write your code here
        s = sum(A)
        curr = sum(i*a for i, a in enumerate(A))
        maxVal = curr
        for i in range(1, len(A)):
            curr += s - len(A)*A[-i]
            maxVal = max(maxVal, curr)
        return maxVal
