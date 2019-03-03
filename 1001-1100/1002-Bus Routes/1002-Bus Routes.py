class Solution:
    """
    @param routes:  a list of bus routes
    @param S: start
    @param T: destination
    @return: the least number of buses we must take to reach destination
    """
    def numBusesToDestination(self, routes, S, T):
        # Write your code here
        if S == T:
            return 0
        n = len(routes)
        stationToBus = collections.defaultdict(set)
        for i in range(n):
            for station in routes[i]:
                stationToBus[station].add(i)
        
        visitedBus = set()
        visitedStation = set()
        Q = [S]
        visitedStation.add(S)
        step = 0
        while len(Q):
            qs = len(Q)
            step += 1
            for i in range(qs):
                s = Q.pop(0)
                for nb in stationToBus[s]:
                    if nb not in visitedBus:
                        visitedBus.add(nb)
                        for ns in routes[nb]:
                            if (ns == T):
                                return step
                            if ns not in visitedStation:
                                Q.append(ns)
                                visitedStation.add(ns)
        return -1