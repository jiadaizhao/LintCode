class Solution:
    """
    @param s: a string
    @return: return List[str]
    """
    def findRepeatedDnaSequences(self, s):
        # write your code here
        table = collections.Counter()
        result = []
        for i in range(len(s) - 9):
            ss = s[i: i + 10]
            table[ss] += 1
            if table[ss] == 2:
                result.append(ss)
        return result
