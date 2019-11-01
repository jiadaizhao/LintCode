class Solution:
    """
    @param s: the original string
    @return: the string without arbitrary spaces
    """
    def removeExtra(self, s):
        # write your code here
        result = []
        i = 0
        while i < len(s) and s[i] == ' ':
            i += 1

        while i < len(s):
            while i < len(s) and s[i] != ' ':
                result.append(s[i])
                i += 1
            
            while i < len(s) and s[i] == ' ':
                i += 1
                
            if i < len(s):
                result.append(' ')

        return ''.join(result)
