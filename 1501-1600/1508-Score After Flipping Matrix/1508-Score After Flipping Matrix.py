class Solution:
    """
    @param A: a matrix
    @return: the score
    """
    def matrixScore(self, A):
        # Write your code here.
        m, n = len(A), len(A[0])
        result = 0
        for j in range(n):
            val = sum(A[i][j] == A[i][0] for i in range(m))
            result += max(val, m - val) * (1 << (n - 1 - j))
        
        return result
