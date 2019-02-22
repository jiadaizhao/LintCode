import math
class Solution:
    """
    @param points: a 2D array
    @return: the minimum number of arrows that must be shot to burst all balloons
    """
    def findMinArrowShots(self, points):
        # Write your code here
        points.sort()
        count = 0
        prev = -math.inf
        for point in points:
            if point[0] > prev:
                count += 1
                prev = point[1]
            else:
                prev = min(prev, point[1])
        return count
