class Solution:
    """
    @param s: a string
    @param t: a string
    @return: the letter that was added in t
    """
    def findTheDifference(self, s, t):
        # Write your code here
        p = 0
        for c in s:
            p ^= ord(c)
        for c in t:
            p ^= ord(c)
        return chr(p)
