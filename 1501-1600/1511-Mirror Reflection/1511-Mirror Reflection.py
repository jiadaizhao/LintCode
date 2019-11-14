import math
class Solution:
    """
    @param p: an integer
    @param q: an integer
    @return: the number of the receptor that the ray meets first
    """
    def mirrorReflection(self, p, q):
        # Write your code here
        g = math.gcd(p, q)
        a = p // g
        if a & 1:
            return 1 if (q//g) & 1 else 0
        else:
            return 2
