class Solution:
    """
    @param s: the string s
    @param k: the maximum length of substring
    @return: return the least number of substring
    """
    def getAns(self, s, k):
        # Write your code here
        count = 0
        start = 0
        i = 0
        while i < len(s):
            count += 1
            while i < len(s) and s[i] == s[start] and i - start < k:
                i += 1
            start = i
        return count
