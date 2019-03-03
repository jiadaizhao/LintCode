import collections
class Solution:
    """
    @param start: The start of the edges set
    @param end: The end of the edges set
    @return: Return the subtree count
    """
    def getSubtreeCount(self, start, end):
        # Write your code here
        MOD = 10000007
        graph = collections.defaultdict(list)
        for s, e in zip(start, end):
            graph[s].append(e)
            
        def dfs(root, prev):
            includeRoot, excludeRoot = 1, 0
            for neighbor in graph[root]:
                if neighbor != prev:
                    nextIncludeRoot, nextExcludeRoot = dfs(neighbor, root)
                    includeRoot = includeRoot * (nextIncludeRoot + 1) % MOD
                    excludeRoot = (excludeRoot + nextIncludeRoot + nextExcludeRoot) % MOD
            
            return includeRoot, excludeRoot
            
        includeRoot, excludeRoot = dfs(1, -1)
        return (includeRoot + excludeRoot) % MOD
