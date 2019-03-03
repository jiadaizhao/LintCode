class Solution:
    """
    @param S: a string
    @return: return a list of strings
    """
    def letterCasePermutation(self, S):
        # write your code here
        upper = sum(c.isalpha() for c in S)
        result = []
        for i in range(1 << upper):
            b = 0
            word = []
            for c in S:
                if c.isalpha():
                    if (i >> b) & 1:
                        word.append(c.upper())
                    else:
                        word.append(c.lower())
                    b += 1
                else:
                    word.append(c)
            result.append(''.join(word))
        return result
