import collections
class Solution:
    """
    @param n: the number of servers
    @param connections: connections
    @return: Critical Connections in a Network
    """
    def criticalConnectionsinaNetwork(self, n, connections):
        # write your code here
        graph = collections.defaultdict(list)
        for a, b in connections:
            graph[a].append(b)
            graph[b].append(a)
            
        low = [-1] * n
        ids = [-1] * n
        time = 0
        result = []
        def dfs(curr, prev):
            nonlocal time
            time += 1
            low[curr] = ids[curr] = time
            for neighbor in graph[curr]:
                if neighbor == prev:
                    continue
                if low[neighbor] == -1:
                    dfs(neighbor, curr)
                    low[curr] = min(low[curr], low[neighbor])
                    if ids[curr] < low[neighbor]:
                        result.append([min(curr, neighbor), max(curr, neighbor)])
                else:
                    low[curr] = min(low[curr], ids[neighbor])
                    
        dfs(0, -1)
        return result
