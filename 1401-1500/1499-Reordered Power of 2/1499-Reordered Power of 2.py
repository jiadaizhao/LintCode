import collections
class Solution:
    """
    @param N: 
    @return: return true or false
    """
    def reorderedPowerOf2(self, N):
        # write your code here
        curr = collections.Counter(str(N))
        return any(curr == collections.Counter(str(1 << i)) for i in range(31))
