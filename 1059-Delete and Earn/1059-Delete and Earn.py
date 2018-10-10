class Solution:
    """
    @param nums: a list of integers
    @return: return a integer
    """
    def deleteAndEarn(self, nums):
        # write your code here
        sums = [0] * 10001
        for num in nums:
            sums[num] += num
            
        prev = curr = 0
        for s in sums:
            next = max(curr, prev + s)
            prev = curr
            curr = next
        return curr
