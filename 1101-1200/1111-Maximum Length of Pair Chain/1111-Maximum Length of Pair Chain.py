import operator
import math
class Solution:
    """
    @param pairs: pairs of numbers
    @return: the length longest chain which can be formed
    """
    def findLongestChain(self, pairs):
        # Write your code here
        pairs.sort(key=operator.itemgetter(1))
        prev = -math.inf
        maxLen = 0
        for s, e in pairs:
            if s > prev:
                maxLen += 1
                prev = e
        
        return maxLen
