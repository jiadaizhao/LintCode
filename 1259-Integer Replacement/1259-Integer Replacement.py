class Solution:
    """
    @param n: a positive integer 
    @return: the minimum number of replacements
    """
    def integerReplacement(self, n):
        # Write your code here
        table = {1:0}
        def dfs(n):
            if n in table:
                return table[n]
            if n & 1:
                result = 1 + min(dfs(n + 1), dfs(n - 1))
            else:
                result = 1 + dfs(n // 2)
            table[n] = result
            return result
        return dfs(n)
