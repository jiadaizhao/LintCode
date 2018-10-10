import collections
import heapq
class Solution:
    """
    @param times: a 2D array
    @param N: an integer
    @param K: an integer
    @return: how long will it take for all nodes to receive the signal
    """
    def networkDelayTime(self, times, N, K):
        # Write your code here
        graph = collections.defaultdict(list)
        for time in times:
            graph[time[0]].append((time[1], time[2]))
        pq = [(0, K)]
        distance = {}
        while pq:
            d, node = heapq.heappop(pq)
            if node in distance:
                continue
            distance[node] = d
            for neighbor, d2 in graph[node]:
                if neighbor not in distance:
                    heapq.heappush(pq, (d + d2, neighbor))
        return max(distance.values()) if len(distance) == N else -1
