class Solution:
    """
    @param n: n
    @param k: k
    @return: Cracking the Safe
    """
    def crackSafe(self, n, k):
        # Write your code here
        visited = set()
        result = []
        def dfs(curr):
            for x in map(str, range(k)):
                next = curr + x
                if next not in visited:
                    visited.add(next)
                    dfs(next[1:])
                    result.append(x)
                    
        dfs('0' * (n - 1))
        return ''.join(result) + '0' * (n - 1)
