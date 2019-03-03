class Solution:
    """
    @param p1: the first point
    @param p2: the second point
    @param p3: the third point
    @param p4: the fourth point
    @return: whether the four points could construct a square
    """
    def validSquare(self, p1, p2, p3, p4):
        # Write your code here
        def distanceSq(p1, p2):
            return (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1])
        table = {distanceSq(p1, p2), distanceSq(p1, p3), distanceSq(p1, p4), distanceSq(p2, p3), distanceSq(p2, p4), distanceSq(p3, p4)}
        return 0 not in table and len(table) == 2
