import collections
class Solution:
    """
    @param S: a string
    @return: the sum of UNIQ(substring) over all non-empty substrings of S
    """
    def uniqueLetterString(self, S):
        # Write your code here
        table = collections.defaultdict(list)
        for i, c in enumerate(S):
            table[c].append(i)
            
        MOD = 10 ** 9 + 7
        count = 0
        for val in table.values():
            index = [-1] + val + [len(S)]
            for i in range(1, len(index) - 1):
                count = (count + (index[i] - index[i - 1]) * (index[i + 1] - index[i])) % MOD
                
        return count
