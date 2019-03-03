class Solution:
    """
    @param nums: a list of integers
    @param m: an integer
    @return: return a integer
    """
    def splitArray(self, nums, m):
        # write your code here
        start, end = max(nums), sum(nums)
        def doable(target):
            count = 1
            sum = 0
            for num in nums:
                if sum + num > target:
                    count += 1
                    if count > m:
                        return False
                    sum = num
                else:
                    sum += num
            return True

        while start < end:
            mid = (start + end) // 2
            if doable(mid):
                end = mid
            else:
                start = mid + 1
        return start
