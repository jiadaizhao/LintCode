import math
class Solution:
    """
    @param x: the given number x
    @param y: the given number y
    @param z: the given number z
    @return: whether it is possible to measure exactly z litres using these two jugs
    """
    def canMeasureWater(self, x, y, z):
        # Write your code here
        if x + y < z:
            return False
        if x == 0 and y == 0:
            return z == 0
        return z % math.gcd(x, y) == 0
