import collections
class Solution:
    """
    @param nums: an array of integers
    @param k: an integer
    @return: the number of unique k-diff pairs
    """
    def findPairs(self, nums, k):
        # Write your code here
        if k < 0:
            return 0
        table= collections.Counter(nums)
        count = 0
        for key, val in table.items():
            if k == 0:
                if val > 1:
                    count += 1
            elif key + k in table:
                count += 1
        return count
