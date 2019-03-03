class Solution:
    """
    @param p: the given string
    @return: the number of different non-empty substrings of p in the string s
    """
    def findSubstringInWraproundString(self, p):
        # Write your code here
        count = [0]*26
        maxLen = 1
        for i in range(len(p)):
            if i > 0 and (ord(p[i]) - ord(p[i - 1]))%26 == 1:
                maxLen += 1
            else:
                maxLen = 1
            count[ord(p[i]) - ord('a')] = max(count[ord(p[i]) - ord('a')], maxLen)
        return sum(count)
