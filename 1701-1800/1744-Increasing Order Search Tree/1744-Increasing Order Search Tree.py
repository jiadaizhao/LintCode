"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: a binary search tree
    @return: Root of a tree
    """
    def increasingBST(self, root):
        # Write your code here.
        St = []
        curr = root
        prev = None
        while curr or St:
            if curr:
                St.append(curr)
                curr = curr.left
            else:
                curr = St.pop()
                curr.left = None
                if prev:
                    prev.right = curr
                else:
                    result = curr
                prev = curr
                curr = curr.right
        return result
