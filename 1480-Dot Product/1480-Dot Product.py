class Solution:
    """
    @param A: an array
    @param B: an array
    @return: dot product of two array
    """
    def dotProduct(self, A, B):
        # Write your code here
        if len(A) != len(B) or len(A) == 0:
            return -1
        return sum(x*y for x, y in zip(A, B))
