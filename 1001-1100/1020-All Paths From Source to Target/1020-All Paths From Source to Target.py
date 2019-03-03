class Solution1:
    """
    @param graph: a 2D array
    @return: all possible paths from node 0 to node N-1
    """
    def allPathsSourceTarget(self, graph):
        # Write your code here
        N = len(graph)
        def dfs(curr):
            if curr == N - 1:
                return [[N - 1]]
            result = []
            for next in graph[curr]:
                for path in dfs(next):
                    result.append([curr] + path)
            return result
        return dfs(0)

class Solution2:
    """
    @param graph: a 2D array
    @return: all possible paths from node 0 to node N-1
    """
    def allPathsSourceTarget(self, graph):
        # Write your code here
        N = len(graph)
        path = [0]
        result = []
        def dfs(curr):
            if curr == N - 1:
                result.append(path[:])
                return
            for next in graph[curr]:
                path.append(next)
                dfs(next)
                path.pop()
            return result
        return dfs(0)
