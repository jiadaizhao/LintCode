import collections
import math
import functools
class Solution:
    """
    @param deck: a integer array
    @return: return a value of bool
    """
    def hasGroupsSizeX(self, deck):
        # write your code here
        table = collections.Counter(deck)
        return functools.reduce(math.gcd, table.values()) >= 2
