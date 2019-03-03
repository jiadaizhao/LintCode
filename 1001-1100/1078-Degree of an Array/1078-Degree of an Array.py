import collections
class Solution:
    """
    @param nums: a list of integers
    @return: return a integer
    """
    def findShortestSubArray(self, nums):
        # write your code here
        degree = 0
        start = {}
        count = collections.Counter()
        minLen = 0
        for i, num in enumerate(nums):
            if num not in start:
                start[num] = i
            count[num] += 1
            if count[num] > degree:
                degree = count[num]
                minLen = i - start[num] + 1
            elif count[num] == degree:
                minLen = min(minLen, i - start[num] + 1)
        return minLen
