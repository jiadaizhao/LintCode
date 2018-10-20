"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None

class Solution:
    """
    @param nums: an array
    @return: the maximum tree
    """
    def constructMaximumBinaryTree(self, nums):
        # Write your code here
        St = []
        for num in nums:
            node = TreeNode(num)
            while St and St[-1].val < num:
                node.left = St.pop()
            
            if St:
                St[-1].right = node
            St.append(node)
        return St[0]
