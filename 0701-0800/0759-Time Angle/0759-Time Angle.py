class Solution:
    """
    @param h: hours
    @param m: minutes
    @return: angle between hour hand and minute hand at X:Y in a clock
    """
    def timeAngle(self, h, m):
        # write your code here
        hAngle = h * 30 + m * 0.5
        mAngle = m * 6
        diff = abs(hAngle - mAngle)
        return diff if diff <= 180 else 360 - diff
