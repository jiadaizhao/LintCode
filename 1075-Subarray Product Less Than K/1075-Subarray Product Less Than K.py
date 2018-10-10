class Solution:
    """
    @param nums: an array
    @param k: an integer
    @return: the number of subarrays where the product of all the elements in the subarray is less than k
    """
    def numSubarrayProductLessThanK(self, nums, k):
        # Write your code here
        if k <= 1:
            return 0
        product = 1
        start = 0
        count = 0
        for i, num in enumerate(nums):
            product *= num
            while product >= k:
                product /= nums[start]
                start += 1
            count += i - start + 1
        return count
