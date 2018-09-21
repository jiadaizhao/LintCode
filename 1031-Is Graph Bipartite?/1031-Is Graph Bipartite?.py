class Solution:
    """
    @param graph: the given undirected graph
    @return:  return true if and only if it is bipartite
    """
    def isBipartite(self, graph):
        # Write your code here
        visited = [0] * len(graph)
        def dfs(curr, prev):
            for next in graph[curr]:
                if visited[next] == 0:
                    visited[next] = 3 - visited[curr]
                    if not dfs(next, curr):
                        return False
                elif visited[next] == visited[curr]:
                    return False
            return True
        for i in range(len(graph)):
            if visited[i] == 0:
                visited[i] = 1
                if not dfs(i, -1):
                    return False
        return True
