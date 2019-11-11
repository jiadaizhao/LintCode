import heapq
class Solution:
    """
    @param target: the distance of src and the dst 
    @param startFuel: the init fuel
    @param stations: station[i] represents a gas station that is station[i][0] miles east of the starting position, and has station[i][1] liters of gas.
    @return: the minimun number 
    """
    def minimumNumberofRefuelingStops(self, target, startFuel, stations):
        # Write your code here.
        dist = startFuel
        pq = []
        i = stop = 0
        while dist < target:
            stop += 1
            while i < len(stations) and stations[i][0] <= dist:
                heapq.heappush(pq, -stations[i][1])
                i += 1
                
            if not pq:
                return -1
                
            dist -= heapq.heappop(pq)
                
        return stop
