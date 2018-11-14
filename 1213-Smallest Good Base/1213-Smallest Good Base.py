import math
class Solution:
    """
    @param n: a string
    @return: return a string
    """
    def smallestGoodBase(self, n):
        # write your code here
        num = int(n)
        maxm = int(math.log(num, 2))
        for m in range(maxm, 1, -1):
            k = int(num ** m ** (-1))
            if k ** (m + 1) == num * k - num + 1:
                return str(k)
        return str(num - 1)
