from functools import lru_cache
class Solution:
    """
    @param target: 
    @return: return a integer
    """
    def racecar(self, target):
        # write your code here
        @lru_cache(None)
        def dfs(target):
            n = target.bit_length()
            if (1 << n) - 1 == target:
                result = n
            else:
                result = dfs((1 << n) - 1 - target) + n + 1
                for m in range(n - 1):
                    result = min(result, dfs(target - (1 << (n - 1)) + (1 << m)) + n + m + 1)
            return result
            
        return dfs(target)
