"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the given tree
    @return: the binary tree in an m*n 2D string array
    """
    def printTree(self, root):
        # Write your code here
        def height(root):
            if root is None:
                return 0
            return 1 + max(height(root.left), height(root.right))
        rows = height(root)
        cols = (1 << rows) - 1
        result = [[''] * cols for _ in range(rows)]
        def fill(node, level, l, r):
            if node is None:
                return
            mid = (l + r) // 2
            result[level][mid] = str(node.val)
            fill(node.left, level + 1, l, mid - 1)
            fill(node.right, level + 1, mid + 1, r)
        fill(root, 0, 0, cols - 1)
        return result
