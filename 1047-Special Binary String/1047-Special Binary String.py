class Solution:
    """
    @param S: a string
    @return: return a string
    """
    def makeLargestSpecial(self, S):
        # write your code here
        strs = []
        start = 0
        bal = 0
        for i, c in enumerate(S):
            if c == '1':
                bal += 1
            else:
                bal -= 1
                
            if bal == 0:
                strs.append('1{}0'.format(self.makeLargestSpecial(S[start+1 : i])))
                start = i + 1
        strs.sort(reverse=True)
        return ''.join(strs)
