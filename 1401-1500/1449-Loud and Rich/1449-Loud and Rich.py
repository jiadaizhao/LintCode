import collections
class Solution:
    """
    @param richer: the richer array
    @param quiet: the quiet array
    @return: the answer
    """
    def loudAndRich(self, richer, quiet):
        # Write your code here.
        graph = collections.defaultdict(list)
        for u, v in richer:
            graph[v].append(u)
        
        result = [-1] * len(quiet)
        def dfs(curr):
            result[curr] = curr
            for r in graph[curr]:
                if result[r] == -1:
                    dfs(r)
                if quiet[result[r]] < quiet[result[curr]]:
                    result[curr] = result[r]
                    
        for i in range(len(result)):
            if result[i] == -1:
                dfs(i)
                
        return result
