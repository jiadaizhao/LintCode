class Solution:
    """
    @param S: a string
    @param K: a integer
    @return: return a string
    """
    def licenseKeyFormatting(self, S, K):
        # write your code here
        result = []
        for c in reversed(S):
            if c != '-':
                if len(result) % (K + 1) == K:
                    result.append('-')
                result.append(c.upper())
        return ''.join(reversed(result))
