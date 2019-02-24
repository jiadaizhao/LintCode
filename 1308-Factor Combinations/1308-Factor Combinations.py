class Solution:
    """
    @param n: a integer
    @return: return a 2D array
    """
    def getFactors(self, n):
        # write your code here
        result = []
        path = []
        def dfs(start, n):
            i = start
            while i * i <= n:
                if n % i == 0:
                    path.append(i)
                    dfs(i, n // i)
                    path.append(n // i)
                    result.append(path[:])
                    path.pop()
                    path.pop()
                i += 1
        
        dfs(2, n)
        return result
