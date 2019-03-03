"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the root of the tree
    @return: the total sum of all root-to-leaf numbers
    """
    def sumNumbers(self, root):
        # write your code here
        def dfs(root, prev):
            if root is None:
                return 0
            curr = prev*10 + root.val
            if root.left is None and root.right is None:
                return curr
            else:
                return dfs(root.left, curr) + dfs(root.right, curr)
        return dfs(root, 0)
