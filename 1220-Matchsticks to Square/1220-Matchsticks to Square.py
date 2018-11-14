class Solution:
    """
    @param nums: an array
    @return: whether you could make one square using all the matchsticks the little match girl has
    """
    def makesquare(self, nums):
        # Write your code here
        if len(nums) < 4:
            return False
        total = sum(nums)
        if total % 4:
            return False
        target = total // 4
        nums.sort(reverse=True)
        sides = [0] * 4
        def dfs(start):
            if start == len(nums):
                return sides[0] == sides[1] == sides[2] == sides[3]
            for i in range(4):
                if sides[i] + nums[start] > target:
                    continue
                j = i - 1
                while j >= 0:
                    if sides[i] == sides[j]:
                        break
                    j -= 1
                    
                if j != -1:
                    continue
                sides[i] += nums[start]
                if dfs(start + 1):
                    return True
                sides[i] -= nums[start]
            return False
        return dfs(0)
