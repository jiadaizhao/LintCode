class Solution:
    """
    @param s: a string
    @param dict: a list of strings
    @return: return a string
    """
    def addBoldTag(self, s, dict):
        # write your code here
        bold = [False] * len(s)
        for word in dict:
            for i in range(0, len(s) - len(word) + 1):
                if s[i:i + len(word)] == word:
                    for j in range(len(word)):
                        bold[i + j] = True
        
        result = []
        i = 0
        while i < len(s):
            if bold[i]:
                result.append('<b>')
                while i < len(s) and bold[i]:
                    result.append(s[i])
                    i += 1
                result.append('</b>')
            else:
                result.append(s[i])
                i += 1
        return ''.join(result)
