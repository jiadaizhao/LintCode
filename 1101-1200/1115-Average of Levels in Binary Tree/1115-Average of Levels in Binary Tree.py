"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: the binary tree of the  root
    @return: return a list of double
    """
    def averageOfLevels(self, root):
        # write your code here
        result = []
        level = [root]
        while level:
            result.append(sum(node.val for node in level) / len(level))
            level = [child for node in level for child in (node.left, node.right) if child]
        
        return result
