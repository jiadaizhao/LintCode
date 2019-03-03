"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the root
    @return: the minimum absolute difference between values of any two nodes
    """
    def getMinimumDifference(self, root):
        # Write your code here
        self.minDiff = math.inf
        self.prev = None
        def inorder(root):
            if root is None:
                return
            inorder(root.left)
            if self.prev:
                self.minDiff = min(self.minDiff, root.val - self.prev.val)
            self.prev = root
            inorder(root.right)
        inorder(root)
        return self.minDiff
