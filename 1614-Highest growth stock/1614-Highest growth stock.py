import math
class Solution:
    """
    @param Stock: Stock information
    @return: return id
    """
    def highestGrowth(self, Stock):
        # Write your code here
        maxG = -math.inf
        for name, p1, p2 in Stock:
            curr = float(p2) / float(p1)
            if curr > maxG:
                maxG = curr
                result = name
        return result
