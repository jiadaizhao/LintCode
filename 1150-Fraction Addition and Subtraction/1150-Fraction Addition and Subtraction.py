import re
import math
class Solution:
    """
    @param expression: a string
    @return: return a string
    """
    def fractionAddition(self, expression):
        # write your code here
        nums = map(int, re.findall(r'[+-]?\d+', expression))
        A, B = 0, 1
        for a in nums:
            b = next(nums)
            A = A * b + B * a
            B *= b
            g = math.gcd(A, B)
            A //= g
            B //= g
        return '{}/{}'.format(A, B)
