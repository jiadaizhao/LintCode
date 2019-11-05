class Solution:
    """
    @param nums: the list
    @return: the sum of all paths from the root towards the leaves
    """
    def pathSumIV(self, nums):
        # Write your code here.
        if not nums:
            return 0
        
        table = {num // 10 : num % 10 for num in nums}
        total = 0
        def dfs(root, preSum):
            nonlocal total
            depth = root // 10
            pos = root % 10
            currSum = preSum + table[root]
            
            left = (depth + 1) * 10 + pos * 2 - 1
            right = (depth + 1) * 10 + pos * 2
            if left not in table and right not in table:
                total += currSum
                
            if left in table:
                dfs(left, currSum)
            
            if right in table:
                dfs(right, currSum)
                
        dfs(min(nums) // 10, 0)
        return total
