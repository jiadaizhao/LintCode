import collections
class Solution:
    """
    @param n: n nodes labeled from 0 to n - 1
    @param edges: a undirected graph
    @return:  a list of all the MHTs root labels
    """
    def findMinHeightTrees(self, n, edges):
        # Wirte your code here
        if n == 2:
            return [0, 1]
        graph = collections.defaultdict(list)
        degrees = [0] * n
        for edge in edges:
            graph[edge[0]].append(edge[1])
            graph[edge[1]].append(edge[0])
            degrees[edge[0]] += 1
            degrees[edge[1]] += 1
        
        Q = collections.deque()
        nodes = set(range(n))
        for i in range(n):
            if degrees[i] == 1:
                degrees[i] -= 1
                nodes.remove(i)
                Q.append(i)
        while len(nodes) > 2:
            qs = len(Q)
            for i in range(qs):
                node = Q.popleft()
                for neighbor in graph[node]:
                    degrees[neighbor] -= 1
                    if degrees[neighbor] == 1:
                        degrees[neighbor] -= 1
                        nodes.remove(neighbor)
                        Q.append(neighbor)
        return list(nodes)
