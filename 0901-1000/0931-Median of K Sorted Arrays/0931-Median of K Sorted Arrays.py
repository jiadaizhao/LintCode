import bisect
class Solution:
    """
    @param nums: the given k sorted arrays
    @return: the median of the given k sorted arrays
    """
    def findMedian(self, nums):
        # write your code here
        n = sum(len(arr) for arr in nums)
        if n == 0:
            return 0

        def findKth(k):
            result = low = 0
            high = (1 << 31) - 1
            while low <= high:
                mid = (low + high) // 2
                count = sum(len(arr) - bisect.bisect_left(arr, mid) for arr in nums)
                if count >= k:
                    result = mid
                    low = mid + 1 
                else:
                    high = mid - 1
            
            return result

        if n & 1:
            return findKth(n // 2 + 1)
        else:
            return (findKth(n // 2) + findKth(n // 2 + 1)) / 2
