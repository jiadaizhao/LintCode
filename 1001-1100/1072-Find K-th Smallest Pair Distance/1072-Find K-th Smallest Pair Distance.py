class Solution:
    """
    @param nums: a list of integers
    @param k: a integer
    @return: return a integer
    """
    def smallestDistancePair(self, nums, k):
        # write your code here
        nums.sort()
        low = 0
        high = nums[-1] - nums[0]
        while low < high:
            mid = (low + high) // 2
            count = left = 0
            for right in range(1, len(nums)):
                while nums[right] - nums[left] > mid:
                    left += 1
                count += right - left
            if count >= k:
                high = mid
            else:
                low = mid + 1
        
        return low
