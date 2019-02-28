class Solution:
    """
    @param m: an Integer
    @param n: an Integer
    @return: the bitwise AND of all numbers in [m,n]
    """
    def rangeBitwiseAnd(self, m, n):
        # Write your code here
        while n > m:
            n &= n - 1
        return n
