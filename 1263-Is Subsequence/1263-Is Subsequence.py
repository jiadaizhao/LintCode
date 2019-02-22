class Solution:
    """
    @param s: the given string s
    @param t: the given string t
    @return: check if s is subsequence of t
    """
    def isSubsequence(self, s, t):
        # Write your code here
        p1 = 0
        p2 = 0
        while p1 < len(s) and p2 < len(t):
            if s[p1] == t[p2]:
                p1 += 1
            p2 += 1
        return p1 == len(s)
