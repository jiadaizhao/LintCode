class Solution:
    """
    @param M: a 2D integer matrix
    @return: a 2D integer matrix
    """
    def imageSmoother(self, M):
        # Write your code here
        m = len(M)
        n = len(M[0])
        result = [[0] * n for _ in range(m)]
        for r in range(m):
            for c in range(n):
                val = M[r][c]
                count = 1
                for nr, nc in (r-1, c-1), (r-1, c), (r-1, c+1), (r, c-1), (r, c+1), (r+1, c-1), (r+1, c), (r+1, c+1):
                    if 0 <= nr < m and 0 <= nc < n:
                        count += 1
                        val += M[nr][nc]
                result[r][c] = val // count
                
        return result
