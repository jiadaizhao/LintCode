class Solution:
    """
    @param x: The end points set of edges
    @param y: The end points set of edges
    @param d: The length of edges
    @return: Return the index of the fermat point
    """
    def getFermatPoint(self, x, y, d):
        # Write your code here
        graph = collections.defaultdict(dict)
        for u, v, z in zip(x, y, d):
            graph[u][v] = z
            graph[v][u] = z
            
        n = len(x) + 1
        nodesCount = [0] * (n + 1)
        distSum = [0] * (n + 1)

        def dfs1(curr, prev):
            nodesCount[curr] = 1
            for next in graph[curr]:
                if next != prev:
                    dfs1(next, curr)
                    nodesCount[curr] += nodesCount[next]
                    distSum[curr] += distSum[next] + nodesCount[next]*graph[curr][next]
        
        dfs1(1, 0)
        minNum = 1
        minSum = distSum[1]
                    
        def dfs2(curr, prev, currSum):
            nonlocal minNum, minSum
            for next in graph[curr]:
                if next != prev:
                    nextSum = currSum - nodesCount[next]*graph[curr][next] + (n - nodesCount[next])*graph[curr][next]
                    if nextSum < minSum or (nextSum == currSum and next < minNum):
                        minNum = next
                        minSum = nextSum
                    
                    dfs2(next, curr, nextSum)
                    
        dfs2(1, 0, distSum[1])
        return minNum
