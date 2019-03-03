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
    @return: the second minimum value in the set made of all the nodes' value in the whole tree
    """
    def findSecondMinimumValue(self, root):
        # Write your code here
        def helper(root, smallest):
            if root is None:
                return -1
            if root.val != smallest:
                return root.val
            left = helper(root.left, smallest)
            right = helper(root.right, smallest)
            if left == -1:                
                return right
            elif right == -1:
                return left
            else:
                return min(left, right)
        return helper(root, root.val)
