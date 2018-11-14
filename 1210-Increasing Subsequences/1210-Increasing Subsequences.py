class Solution:
    """
    @param nums: an integer array
    @return: all the different possible increasing subsequences of the given array
    """
    def findSubsequences(self, nums):
        # Write your code here
        if len(nums) <= 1:
            return []
        path = []
        result = []
        def dfs(start):
            if len(path) >= 2:
                result.append(path[:])
            used = set()
            for i in range(start, len(nums)):
                if nums[i] not in used and (not path or nums[i] >= path[-1]):
                    path.append(nums[i])
                    used.add(nums[i])
                    dfs(i + 1)
                    path.pop()
        dfs(0)
        return result
