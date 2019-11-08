class Solution:
    """
    @param A: 
    @return: the length of the longest mountain
    """
    def longestMountain(self, A):
        # write your code here
        left = maxLen = 0
        n = len(A)
        while left < len(A):
            right = left
            if right < n - 1 and A[right] < A[right + 1]:
                while right < n - 1 and A[right] < A[right + 1]:
                    right += 1
                    
                if right < n - 1 and A[right] > A[right + 1]:
                    while right < n - 1 and A[right] > A[right + 1]:
                        right += 1
                    maxLen = max(maxLen, right - left + 1)
                
            left = max(left + 1, right)
            
        return maxLen
