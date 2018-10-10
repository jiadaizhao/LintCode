class Solution:
    """
    @param source: List[str]
    @return: return List[str]
    """
    def removeComments(self, source):
        # write your code here
        result = []
        inBlock = False
        for s in source:
            if not inBlock:
                newLine = []
            i = 0
            while i < len(s):
                if s[i:i + 2] == '/*' and not inBlock:
                    inBlock = True
                    i += 1
                elif s[i:i + 2] == '*/' and inBlock:
                    inBlock = False
                    i += 1
                elif not inBlock and s[i:i + 2] == '//':
                    break
                elif not inBlock:
                    newLine.append(s[i])
                i += 1
                
            if newLine and not inBlock:
                result.append(''.join(newLine))
        return result
