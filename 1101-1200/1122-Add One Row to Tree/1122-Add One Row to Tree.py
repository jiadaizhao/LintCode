"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the root of binary tree
    @param v: a integer
    @param d: a integer
    @return: return a TreeNode
    """
    def addOneRow(self, root, v, d):
        # write your code here
        if d == 1:
            node = TreeNode(v)
            node.left = root
            return node
        def helper(root, v, d):
            if root is None:
                return
            if d == 2:
                left = TreeNode(v)
                right = TreeNode(v)
                left.left = root.left
                right.right = root.right
                root.left = left
                root.right = right
            else:
                helper(root.left, v, d - 1)
                helper(root.right, v, d - 1)
        helper(root, v, d)
        return root
