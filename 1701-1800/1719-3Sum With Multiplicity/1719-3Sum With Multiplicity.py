import collections
import itertools
class Solution:
    """
    @param A: the given integer array
    @param target: the given integer target
    @return: the number of tuples
    """
    def threeSumMulti(self, A, target):
        # Write your code here
        table = collections.Counter(A)
        MOD = 10 ** 9 + 7
        total = 0
        for Ai, Aj in itertools.combinations_with_replacement(sorted(table), 2):
            Ak = target - Ai - Aj
            if Ak in table:
                if Ai == Aj:
                    if Aj == Ak:
                        total = (total + table[Ai] * (table[Ai] - 1) * (table[Ai] - 2) // 6) % MOD
                    else:
                        total = (total + table[Ai] * (table[Ai] - 1) // 2 * table[Ak]) % MOD
                elif Ai < Aj < Ak:
                    total = (total + table[Ai] * table[Aj] * table[Ak]) % MOD
                    
        return total
