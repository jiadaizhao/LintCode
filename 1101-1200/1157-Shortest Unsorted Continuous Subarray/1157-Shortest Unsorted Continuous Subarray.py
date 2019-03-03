class Solution:
    """
    @param nums: an array
    @return: the shortest subarray's length
    """
    def findUnsortedSubarray(self, nums):
        # Write your code here
        flag = False
        minNum = math.inf
        maxNum = -math.inf
        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]:
                flag = True
            if flag:
                minNum = min(minNum, nums[i])
                
        if not flag:
            return 0
        flag = False
        for i in range(len(nums) - 2, -1, -1):
            if nums[i] > nums[i + 1]:
                flag = True
            if flag:
                maxNum = max(maxNum, nums[i])
                
        l = 0
        while l < len(nums):
            if nums[l] > minNum:
                break
            else:
                l += 1
        r = len(nums) - 1
        while r >= 0:
            if nums[r] < maxNum:
                break
            else:
                r -= 1
        return r - l + 1 if r > l else 0
