import math
class Solution:
    """
    @param A: the array
    @return: Maximum Sum Circular Subarray
    """
    def maxSubarraySumCircular(self, A):
        maxSum = -math.inf
        total = currMax = currMin = minSum = 0
        for a in A:
            if currMax < 0:
                currMax = 0
            currMax += a
            if currMin > 0:
                currMin = 0
            currMin += a
            total += a
            maxSum = max(maxSum, currMax)
            minSum = min(minSum, currMin)
            
        if minSum != total:
            maxSum = max(maxSum, total - minSum)
        
        return maxSum
