class Solution:
    """
    @param matrix: an integer matrix
    @return: the length of the longest increasing path
    """
    def longestIncreasingPath(self, matrix):
        # write your code here
        m = len(matrix)
        if m == 0:
            return 0
        cache = {}
        n = len(matrix[0])
        maxLen = 0
        def dfs(row, col):
            if (row, col) in cache:
                return cache[(row, col)]
            ml = 1
            for dr, dc in ((-1, 0), (1, 0), (0, -1), (0, 1)):
                nr = row + dr
                nc = col + dc
                if nr >= 0 and nr < m and nc >= 0 and nc < n and matrix[nr][nc] > matrix[row][col]:
                    ml = max(ml, 1 + dfs(nr, nc))
            cache[(row, col)] = ml
            return ml
        
        for i in range(m):
            for j in range(n):
                maxLen = max(maxLen, dfs(i, j))
        return maxLen
