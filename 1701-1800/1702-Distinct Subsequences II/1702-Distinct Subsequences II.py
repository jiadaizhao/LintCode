import collections
class Solution:
    """
    @param S: The string s
    @return: The number of distinct, non-empty subsequences of S.
    """
    def distinctSubseqII(self, S):
        # Write your code here
        total, end = 0, collections.Counter()
        MOD = 10 ** 9 + 7
        for c in S:
            total, end[c] = (total * 2 + 1 - end[c]) % MOD, (total + 1) % MOD
        return total
