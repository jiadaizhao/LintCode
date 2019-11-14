class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None

class Solution:
    """
    @param root: the tree
    @param val: the val which should be find
    @return: the node
    """
    def searchBST(self, root, val):
        # Write your code here.
        curr = root
        while curr:
            if curr.val < val:
                curr = curr.right
            elif curr.val > val:
                curr = curr.left
            else:
                return curr
                
        return None
