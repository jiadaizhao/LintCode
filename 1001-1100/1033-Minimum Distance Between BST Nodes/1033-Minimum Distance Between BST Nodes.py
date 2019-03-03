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
    @return: the minimum difference between the values of any two different nodes in the tree
    """
    def minDiffInBST(self, root):
        # Write your code here
        self.minDiff = math.inf
        self.prev = None
        def dfs(node):
            if node:
                dfs(node.left)
                if self.prev:
                    self.minDiff = min(self.minDiff, node.val - self.prev.val)
                self.prev = node
                dfs(node.right)
        dfs(root)
        return self.minDiff
