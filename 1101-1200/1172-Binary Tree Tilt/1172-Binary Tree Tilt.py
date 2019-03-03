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
    @return: the tilt of the whole tree
    """
    def findTilt(self, root):
        # Write your code here
        self.total = 0
        def findSum(root):
            if root is None:
                return 0
            leftSum = findSum(root.left)
            rightSum = findSum(root.right)
            self.total += abs(leftSum - rightSum)
            return leftSum + root.val + rightSum
        findSum(root)
        return self.total
