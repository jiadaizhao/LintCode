import heapq
class Solution:
    """
    @param n: a integer
    @param flights: a 2D array
    @param src: a integer
    @param dst: a integer
    @param K: a integer
    @return: return a integer
    """
    def findCheapestPrice(self, n, flights, src, dst, K):
        # write your code here
        weights = collections.defaultdict(dict)
        for f in flights:
            weights[f[0]][f[1]] = f[2]
        pq = [(0, 0, src)]
        dist = {}
        while pq:
            cost, stop, city = heapq.heappop(pq)
            if (stop, city) in dist:
                continue
            if city == dst:
                return cost
            dist[(stop, city)] = cost
            if stop <= K:
                for neighbor, weight in weights[city].items():
                    if neighbor not in dist:
                        heapq.heappush(pq, (cost + weight, stop + 1, neighbor))
        
        return -1
