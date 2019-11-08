"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the tree
    @param sum: the sum
    @return:  if the tree has a root-to-leaf path 
    """
    def pathSum(self, root, sum):
        # Write your code here.
        if root is None:
            return False
        sum -= root.val
        if sum == 0 and root.left is None and root.right is None:
            return True
        return self.pathSum(root.left, sum) or self.pathSum(root.right, sum)
