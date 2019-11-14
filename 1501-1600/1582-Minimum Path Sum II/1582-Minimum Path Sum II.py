import heapq
class Solution:
    """
    @param matrix: a matrix
    @return: the minimum height
    """
    def minPathSumII(self, matrix):
        # Write your code here
        n = len(matrix)
        m = len(matrix[0])
        pq = [(matrix[n - 1][0], n - 1, 0)]
        distance = {}
        while pq:
            d, row, col = heapq.heappop(pq)
            index = row * m + col
            if index not in distance:
                distance[index] = d
                for nr, nc in (row-1, col), (row+1, col), (row, col-1), (row, col+1):
                    if 0 <= nr < n and 0<= nc < m and nr*m + nc not in distance:
                        heapq.heappush(pq, (d + matrix[nr][nc], nr, nc))
        
        return distance[m - 1]
