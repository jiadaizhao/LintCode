class Solution:
    """
    @param S: the given string
    @return: the minimum number of parentheses we must add
    """
    def minAddToMakeValid(self, S):
        # Write your code here
        bal = left = 0
        for c in S:
            bal += 1 if c == '(' else -1
            if bal < 0:
                bal = 0
                left += 1
        return left + bal
