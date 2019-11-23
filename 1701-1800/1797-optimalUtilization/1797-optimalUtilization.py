import math
class Solution:
    """
    @param A: a integer sorted array
    @param B: a integer sorted array
    @param K: a integer
    @return: return a pair of index
    """
    def optimalUtilization(self, A, B, K):
        # write your code here
        left = 0
        right = len(B) - 1
        result = []
        maxSum = -math.inf
        while left < len(A) and right >= 0:
            curr = A[left] + B[right]
            if curr < K:
                if curr > maxSum:
                    maxSum = curr
                    while right > 0 and B[right] == B[right - 1]:
                        right -= 1
                    result = [left, right]
                left += 1
            elif curr > K:
                right -= 1
            else:
                while right > 0 and B[right] == B[right - 1]:
                    right -= 1
                result = [left, right]
                break
            
        return result
