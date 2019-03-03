import math
class Solution:
    """
    @param n: The number of stones
    @param left: The minimum length to merge stones
    @param right: The maximum length to merge stones
    @param weight: The weight array
    @return: Return the minimum cost
    """
    def getMinimumCost(self, n, left, right, weight):
        # Write your code here
        presum = [0] * (1 + n)
        for i, w in enumerate(weight):
            presum[i + 1] = presum[i] + w
        
        cache = {}
        def dfs(i, j, k):
            if i == j:
                if k == 1:
                    return 0
                else:
                    return math.inf
            
            index = i*n*n + j*n + k
            if index not in cache:
                minCost = math.inf
                if k == 1:
                    for t in range(left, right + 1):
                        minCost = min(minCost, dfs(i, j, t) + presum[j] - presum[i - 1])
                else:
                    for t in range(i, j):
                        minCost = min(minCost, dfs(i, t, k - 1) + dfs(t + 1, j, 1))
                cache[index] = minCost
            return cache[index]
            
        result = dfs(1, n, 1)
        return result if result != math.inf else 0
