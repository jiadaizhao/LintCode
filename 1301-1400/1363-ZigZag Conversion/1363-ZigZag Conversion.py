class Solution:
    """
    @param s: the given string
    @param numRows: the number of rows
    @return: the string read line by line
    """
    def convert(self, s, numRows):
        # Write your code here
        if numRows == 1:
            return s
        result = [''] * numRows
        index = 0
        step = 1
        for c in s:
            result[index] += c
            if index == 0:
                step = 1
            elif index == numRows - 1:
                step = -1
            index += step
        return ''.join(result)
