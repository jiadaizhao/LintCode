"""
Definition of TreeNode:
"""
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None


class Solution:
    """
    @param nums: the sorted array
    @return: the root of the tree
    """
    def convertSortedArraytoBinarySearchTree(self, nums):
        # Write your code here.
        def dfs(start, end):
            if start > end:
                return None
            mid = (start + end) // 2
            root = TreeNode(nums[mid])
            root.left = dfs(start, mid - 1)
            root.right = dfs(mid + 1, end)
            return root
            
        return dfs(0, len(nums) - 1)
