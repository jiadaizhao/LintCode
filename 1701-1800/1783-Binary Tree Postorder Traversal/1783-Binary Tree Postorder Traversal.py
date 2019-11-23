"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: A Tree
    @return: Postorder in ArrayList which contains node values.
    """
    def postorderTraversal(self, root):
        # write your code here
        if root is None:
            return []
        result = []
        St = [root]
        prev = None
        while St:
            curr = St[-1]
            if prev is None or prev.left == curr or prev.right == curr:
                if curr.left:
                    St.append(curr.left)
                elif curr.right:
                    St.append(curr.right)
            elif curr.left == prev:
                if curr.right:
                    St.append(curr.right)
            else:
                result.append(curr.val)
                St.pop()
            prev = curr
        return result
