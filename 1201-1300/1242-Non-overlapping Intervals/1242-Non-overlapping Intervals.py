"""
Definition of Interval.
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""
import math
class Solution:
    """
    @param intervals: a collection of intervals
    @return: the minimum number of intervals you need to remove
    """
    def eraseOverlapIntervals(self, intervals):
        # write your code here
        intervals.sort(key=lambda x: x.start)
        count = 0
        prev = -math.inf
        for interval in intervals:
            if interval.start < prev:
                count += 1
                prev = min(prev, interval.end)
            else:
                prev = interval.end
        return count
