import math
class Solution:
    """
    @param n: an integer
    @param k: an integer
    @return: how many problem can you accept
    """
    def canAccept(self, n, k):
        # Write your code here
        return math.floor((math.sqrt(1 + 8*n/k) - 1) / 2)
