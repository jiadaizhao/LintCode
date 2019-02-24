import bisect
import math
class Solution:
    """
    @param matrix: a 2D matrix
    @param k: an integer
    @return: the max sum of a rectangle in the matrix such that its sum is no larger than k
    """
    def maxSumSubmatrix(self, matrix, k):
        # Write your code here
        m = len(matrix)
        n = len(matrix[0])
        maxSum = -math.inf

        for l in range(n):
            sums = [0] * m
            for r in range(l, n):
                table = [0]
                presum = 0
                for i in range(m):
                    sums[i] += matrix[i][r]
                    presum += sums[i]
                    index = bisect.bisect_left(table, presum - k)
                    if index != len(table):
                        maxSum = max(maxSum, presum - table[index])
                        if maxSum == k:
                            return k
                    bisect.insort_left(table, presum)                

        return maxSum
