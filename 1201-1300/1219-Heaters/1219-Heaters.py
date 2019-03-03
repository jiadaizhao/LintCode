import bisect
class Solution:
    """
    @param houses: positions of houses
    @param heaters: positions of heaters
    @return: the minimum radius standard of heaters
    """
    def findRadius(self, houses, heaters):
        # Write your code here
        heaters.sort()
        radius = 0
        for house in houses:
            index = bisect.bisect_left(heaters, house)
            rightRadius = house - heaters[-1] if index == len(heaters) else heaters[index] - house
            leftRadius = house - heaters[index - 1] if index > 0 else rightRadius
            radius = max(radius, min(leftRadius, rightRadius))
        return radius
