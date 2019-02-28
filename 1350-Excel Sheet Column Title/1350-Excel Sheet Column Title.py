class Solution:
    """
    @param n: a integer
    @return: return a string
    """
    def convertToTitle(self, n):
        # write your code here
        result = []
        while n:
            result.append(chr(ord('A') + (n - 1) % 26))
            n = (n - 1) // 26
        return ''.join(result[::-1])
