"""
Definition of Interval.
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""
import bisect
class Solution:
    """
    @param intervals: a list of intervals
    @return: return a list of integers
    """
    def findRightInterval(self, intervals):
        # write your code here
        table = sorted((interval.start, i) for i, interval in enumerate(intervals))
        result = [-1] * len(intervals)
        for i, interval in enumerate(intervals):
            index = bisect.bisect_left(table, (interval.end,))
            if index < len(intervals):
                result[i] = table[index][1]
        return result
