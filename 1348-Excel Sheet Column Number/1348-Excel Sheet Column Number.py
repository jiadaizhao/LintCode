class Solution:
    """
    @param s: a string
    @return: return a integer
    """
    def titleToNumber(self, s):
        # write your code here
        num = 0
        for c in s:
            num = num * 26 + ord(c) - ord('A') + 1
        return num
