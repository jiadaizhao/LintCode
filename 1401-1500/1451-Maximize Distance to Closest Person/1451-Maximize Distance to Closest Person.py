class Solution:
    """
    @param seats: an array
    @return: the maximum distance
    """
    def maxDistToClosest(self, seats):
        # Write your code here.
        maxDist = 0
        prev = -1
        for i, s in enumerate(seats):
            if s == 1:
                if prev == -1:
                    maxDist = i
                else:
                    maxDist = max(maxDist, (i - prev) // 2)
                prev = i
                
        if seats[-1] == 0:
            maxDist = max(maxDist, len(seats) - 1 - prev)
        
        return maxDist
