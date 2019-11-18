import collections
class Solution:
    """
    @param n: The number of points
    @param G: The description of graph
    @param S: The point S
    @param T: The point T
    @return: output all the paths from S to T
    """
    def getPath(self, n, G, S, T):
        # Write your code here
        graph = collections.defaultdict(list)
        for u, v in G:
            graph[u].append(v)
            graph[v].append(u)
            
        for neighbors in graph.values():
            neighbors.sort()
            
        result = []
        visited = [False] * n
        visited[S] = True
        def dfs(curr, path):
            if curr == T:
                result.append(path[:])
                return
            
            for neighbor in graph[curr]:
                if not visited[neighbor]:
                    path.append(neighbor)
                    visited[neighbor] = True
                    dfs(neighbor, path)
                    visited[neighbor] = False
                    path.pop()
                    
        path = [S]
        dfs(S, path)
        return result
