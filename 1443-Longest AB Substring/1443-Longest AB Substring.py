class Solution:
    """
    @param S: a String consists of a and b
    @return: the longest of the longest string that meets the condition
    """
    def getAns(self, S):
        # Write your code here
        maxLen = 0
        bal = 0
        table = {0:-1}
        for i, c in enumerate(S):
            bal += 1 if c == 'A' else -1
            if bal in table:
                maxLen = max(maxLen, i - table[bal])
            else:
                table[bal] = i
        return maxLen
