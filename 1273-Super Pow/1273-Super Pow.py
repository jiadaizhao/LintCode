from functools import reduce
class Solution:
    """
    @param a: the given number a
    @param b: the given array
    @return: the result
    """
    def superPow(self, a, b):
        # Write your code here
        p = reduce(lambda x, y: (10*x + y)%1140, b)
        return pow(a, p, 1337)
