class Solution:
    """
    @param s: the given string
    @return: whether this string is valid
    """
    def checkValidString(self, s):
        # Write your code here
        low = high = 0
        for c in s:
            low += 1 if c == '(' else -1
            high += 1 if c != ')' else -1
            if high < 0:
                return False
            low = max(0, low)
        return low == 0
