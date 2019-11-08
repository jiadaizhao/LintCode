class Solution:
    """
    @param numRows: num of rows
    @return: generate Pascal's triangle
    """
    def generate(self, numRows):
        # write your code here
        result = []
        for i in range(numRows):
            row = [1] * (i + 1)
            for j in range(1, i):
                row[j] = result[-1][j - 1] + result[-1][j]
            result.append(row)
        
        return result
