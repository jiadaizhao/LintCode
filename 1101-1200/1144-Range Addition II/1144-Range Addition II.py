class Solution:
    """
    @param m: an integer
    @param n: an integer
    @param ops: List[List[int]]
    @return: return an integer
    """
    def maxCount(self, m, n, ops):
        # write your code here
        for op in ops:
            m = min(m, op[0])
            n = min(n, op[1])
        return m * n
