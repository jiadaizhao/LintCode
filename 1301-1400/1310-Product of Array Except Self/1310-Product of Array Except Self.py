class Solution:
    """
    @param nums: an array of integers
    @return: the product of all the elements of nums except nums[i].
    """
    def productExceptSelf(self, nums):
        # write your code here
        product = [1] * len(nums)
        for i in range(1, len(nums)):
            product[i] = product[i - 1] * nums[i - 1]
        right = 1
        for i in range(len(nums) - 2, -1, -1):            
            right *= nums[i + 1]
            product[i] *= right
            
        return product
