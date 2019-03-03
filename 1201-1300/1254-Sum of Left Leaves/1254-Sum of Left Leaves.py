"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: t
    @return: the sum of all left leaves
    """
    def sumOfLeftLeaves(self, root):
        # Write your code here
        if root is None:
            return 0
        if root.left and root.left.left is None and root.left.right is None:
            return root.left.val + self.sumOfLeftLeaves(root.right)
        else:
            return self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right)
