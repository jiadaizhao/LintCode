class Solution:
    """
    @param nums: List[int]
    @return: return List[str]
    """
    def findRelativeRanks(self, nums):
        # write your code here
        snums = sorted(nums, reverse = True)
        ranks = ["Gold Medal", "Silver Medal", "Bronze Medal"] + list(map(str, range(4, len(nums) + 1)))
        return list(map(dict(zip(snums, ranks)).get, nums))
