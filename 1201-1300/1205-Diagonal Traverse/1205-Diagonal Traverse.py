class Solution:
    """
    @param matrix: a 2D array
    @return: return a list of integers
    """
    def findDiagonalOrder(self, matrix):
        # write your code here
        table = collections.defaultdict(list)
        for i, row in enumerate(matrix):
            for j, val in enumerate(row):
                table[i + j].append(val)
        
        result = []
        for k in sorted(table.keys()):
            result += (table[k] if k & 1 else table[k][::-1])
        return result
