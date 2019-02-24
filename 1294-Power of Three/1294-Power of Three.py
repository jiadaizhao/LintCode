class Solution:
    """
    @param n: an integer
    @return: if n is a power of three
    """
    def isPowerOfThree(self, n):
        # Write your code here
        return n > 0 and 1162261467 % n == 0
