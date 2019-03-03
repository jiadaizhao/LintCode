class Solution:
    """
    @param s: a string
    @return: return a boolean
    """
    def repeatedSubstringPattern(self, s):
        # write your code here
        return s in (s + s)[1:-1]
