import collections
import math
class Solution:
    """
    @param a: the edge set
    @param k: the integer k
    @return: return the minimum number of people required to supervise this tree
    """
    def minCover(self, a, k):
        # write your code here
        n = len(a) + 1
        graph = collections.defaultdict(list)
        for u, v in a:
            graph[u].append(v)
            graph[v].append(u)
        
        total = 0
        def dfs(curr, prev):
            nonlocal total
            minNum = math.inf
            maxNum = -math.inf
            for next in graph[curr]:
                if next != prev:
                    nr = dfs(next, curr)
                    minNum = min(minNum, nr)
                    maxNum = max(maxNum, nr)
            
            if minNum == math.inf:
                result = -1
            elif minNum <= -k:
                result = k
                total += 1
            elif maxNum > -minNum:
                result = maxNum - 1
            else:
                result = minNum - 1
            return result
                
        result = dfs(1, 0)
        if result < 0:
            total += 1
        return total
