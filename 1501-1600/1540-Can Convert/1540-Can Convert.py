class Solution:
    """
    @param s: string S
    @param t: string T
    @return: whether S can convert to T
    """
    def canConvert(self, s, t):
        # Write your code here
        if len(t) == 0:
            return True
        i = 0
        for c in s:
            if c == t[i]:
                i += 1
                if i == len(t):
                    return True
        return False
