import collections
class Solution:
    """
    @param N:  sum of the set
    @param dislikes: dislikes peoples
    @return:  if it is possible to split everyone into two groups in this way
    """
    def possibleBipartition(self, N, dislikes):
        # Write your code here.
        graph = collections.defaultdict(list)
        for u, v in dislikes:
            graph[u].append(v)
            graph[v].append(u)
            
        colors = {}
        def dfs(curr, col):
            colors[curr] = col
            for next in graph[curr]:
                if next not in colors:
                    if not dfs(next, 1 - col):
                        return False
                elif colors[next] == col:
                    return False
                    
            return True
            
        return all(dfs(curr, 0) for curr in range(1, N + 1) if curr not in colors)
