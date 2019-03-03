class Solution:
    """
    @param matrix: the height matrix
    @param R: the row of (R,C)
    @param C: the columns of (R,C)
    @return: Whether the water can flow outside
    """
    def waterInjection(self, matrix, R, C):
        # Write your code here
        m = len(matrix)
        n = len(matrix[0])
        curr = [(R, C)]
        while curr:
            next = []
            for r, c in curr:
                if r == 0 or r == m - 1 or c == 0 or c == n - 1:
                    return 'YES'
                for nr, nc in (r-1, c), (r+1, c), (r, c-1), (r, c+1):
                    if nr >= 0 and nr < m and nc >= 0 and nc < n and matrix[nr][nc] < matrix[r][c]:
                        next.append((nr, nc))
            curr = next
        return 'NO'
