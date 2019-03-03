class Solution:
    """
    @param matrix: 
    @param x: 
    @param y: 
    @return: return the matrix
    """
    def removeOne(self, matrix, x, y):
        # Write your code here
        while x < len(matrix):
            matrix[x][y] = 0
            x += 1
        return matrix
