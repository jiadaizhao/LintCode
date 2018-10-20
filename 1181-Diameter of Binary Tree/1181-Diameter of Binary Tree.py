"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: a root of binary tree
    @return: return a integer
    """
    def diameterOfBinaryTree(self, root):
        # write your code here
        self.maxLen = 0
        def findMaxPath(root):
            if root is None:
                return -1
            left = findMaxPath(root.left)
            right = findMaxPath(root.right)
            self.maxLen = max(self.maxLen, 2 + left + right)
            return 1 + max(left, right)
        findMaxPath(root)
        return self.maxLen
