"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: a root of tree
    @return: return a integer
    """
    def findBottomLeftValue(self, root):
        # write your code here
        Q = [root]
        while Q:
            result = Q[0].val
            Q = [child for node in Q for child in (node.left, node.right) if child is not None]
        return result
