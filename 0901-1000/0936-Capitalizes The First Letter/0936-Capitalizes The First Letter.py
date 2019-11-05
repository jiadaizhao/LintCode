class Solution:
    """
    @param s: a string
    @return: a string after capitalizes the first letter
    """
    def capitalizesFirst(self, s):
        # Write your code here
        result = []
        for i, c in enumerate(s):
            if c != ' ' and (i == 0 or s[i - 1] == ' '):
                result.append(c.upper())
            else:
                result.append(c)
        return ''.join(result)
