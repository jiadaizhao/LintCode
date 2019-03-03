import collections
class Solution:
    """
    @param N: an integer
    @param edges: the edges
    @return: a list ans, where ans[i] is the sum of the distances between node i and all other nodes
    """
    def sumOfDistancesInTree(self, N, edges):
        # Write your code here
        graph = collections.defaultdict(list)
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        nodeCount = [0] * N
        distSum = [0] * N
        def dfs1(curr, prev):
            nodeCount[curr] = 1
            for next in graph[curr]:
                if next != prev:
                    dfs1(next, curr)
                    nodeCount[curr] += nodeCount[next]
                    distSum[curr] += distSum[next] + nodeCount[next]
                    
        dfs1(0, -1)
        result = [0] * N
        def dfs2(curr, prev, currSum):
            result[curr] = currSum
            for next in graph[curr]:
                if next != prev:
                    nextSum = currSum - nodeCount[next] + (N - nodeCount[next])
                    dfs2(next, curr, nextSum)
        
        dfs2(0, -1, distSum[0])
        return result
