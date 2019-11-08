import math
import collections
class Solution:
    """
    @param graph: the graph
    @return: the shortest path for all nodes
    """
    def shortestPathLength(self, graph):
        # Write your code here.
        N = len(graph)
        dp = [[math.inf] * (1 << N) for _ in range(N)]
        Q = collections.deque()
        for i in range(N):
            dp[i][1 << i] = 0
            Q.append((i, 1 << i))
        
        while Q:
            curr, mask = Q.popleft()
            for next in graph[curr]:
                nextMask = mask | (1 << next)
                if dp[next][nextMask] > dp[curr][mask] + 1:
                    dp[next][nextMask] = dp[curr][mask] + 1
                    Q.append((next, nextMask))
                    
        return min(list(zip(*dp))[-1])
