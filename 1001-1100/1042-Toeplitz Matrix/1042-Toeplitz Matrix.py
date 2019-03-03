class Solution:
    """
    @param matrix: the given matrix
    @return: True if and only if the matrix is Toeplitz
    """
    def isToeplitzMatrix(self, matrix):
        # Write your code here
        for i in range(1, len(matrix)):
            for j in range(1, len(matrix[i])):
                if matrix[i][j] != matrix[i - 1][j - 1]:
                    return False
        return True
