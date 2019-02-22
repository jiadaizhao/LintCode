import collections
class Solution:
    """
    @param points: a 2D array
    @return: the number of boomerangs
    """
    def numberOfBoomerangs(self, points):
        # Write your code here
        count = 0
        for p in points:
            table = collections.Counter()
            for q in points:
                a = p[0] - q[0]
                b = p[1] - q[1]
                dist = a*a + b*b
                count += 2*table[dist]
                table[dist] += 1
        return count
