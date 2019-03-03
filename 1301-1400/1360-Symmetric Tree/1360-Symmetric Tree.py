"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: root of the given tree
    @return: whether it is a mirror of itself 
    """
    def isSymmetric(self, root):
        # Write your code here
        def isMirror(p, q):
            if p is None and q is None:
                return True
            if p is None or q is None:
                return False
            return p.val == q.val and isMirror(p.left, q.right) and isMirror(p.right, q.left)
        return isMirror(root, root)
