import math
class Solution:
    """
    @param stations: an integer array
    @param k: an integer
    @return: the smallest possible value of D
    """
    def minmaxGasDist(self, stations, k):
        # Write your code here
        start, end = 0, stations[-1] - stations[0]
        while end - start > 1e-6:
            mid = (start + end) / 2
            count = sum(math.ceil((stations[i] - stations[i - 1]) / mid) - 1 for i in range(1, len(stations)))
            if count <= k:
                end = mid
            else:
                start = mid
        return start