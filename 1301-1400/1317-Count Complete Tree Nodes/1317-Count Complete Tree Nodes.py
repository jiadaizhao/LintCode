"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: root of complete binary tree
    @return: the number of nodes
    """
    def countNodes(self, root):
        # write your code here
        def height(root):
            h = -1
            while root:
                root = root.left
                h += 1
            return h
        
        h = height(root)
        count = 0
        while root:
            rh = height(root.right)
            if rh == h - 1:
                count += 1 << h
                root = root.right
            else:
                count += 1 << (h - 1)
                root = root.left
            h -= 1
        return count
