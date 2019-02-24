class Solution:
    """
    @param matrix: List[List[int]]
    @param k: a integer
    @return: return a integer
    """
    def kthSmallest(self, matrix, k):
        # write your code here
        low = matrix[0][0]
        high = matrix[-1][-1] + 1
        n = len(matrix)
        while low < high:
            mid = (low + high) // 2
            count = 0
            row = n - 1
            col = 0
            while row >= 0 and col < n:
                if matrix[row][col] > mid:
                    row -= 1
                else:
                    col += 1
                    count += row + 1
            if count < k:
                low = mid + 1
            else:
                high = mid
        return low
