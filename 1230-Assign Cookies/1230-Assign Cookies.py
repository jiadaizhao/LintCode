class Solution:
    """
    @param g: children's greed factor
    @param s: cookie's size
    @return: the maximum number
    """
    def findContentChildren(self, g, s):
        # Write your code here
        g.sort()
        s.sort()
        i = 0
        j = 0
        while i < len(g) and j < len(s):
            if s[j] >= g[i]:
                i += 1
            j += 1
        return i
