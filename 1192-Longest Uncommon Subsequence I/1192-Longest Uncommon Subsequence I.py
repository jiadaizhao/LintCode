class Solution:
    """
    @param a: a string
    @param b: a string
    @return: return a integer
    """
    def findLUSlength(self, a, b):
        # write your code here
        return -1 if a == b else max(len(a), len(b))
