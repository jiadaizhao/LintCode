"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param s: the s' root
    @param t: the t' root
    @return: whether tree t has exactly the same structure and node values with a subtree of s
    """
    def isSubtree(self, s, t):
        # Write your code here
        def isSame(s, t):
            if s is None or t is None:
                return s == t
            return s.val == t.val and isSame(s.left, t.left) and isSame(s.right, t.right)
        
        if s is None or t is None:
            return s == t
                
        return isSame(s, t) or self.isSubtree(s.left, t) or self.isSubtree(s.right, t)
