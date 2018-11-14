"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: a root of integer
    @return: return a integer
    """
    def findMode(self, root):
        # write your code here
        self.maxCount = self.modeCount = self.currVal = self.currCount = 0
        result = []
        def handleVal(val):
            if self.currVal != val:
                self.currVal = val
                self.currCount = 0
            self.currCount += 1
            if self.currCount > self.maxCount:
                self.maxCount = self.currCount
                self.modeCount = 1
            elif self.currCount == self.maxCount:
                self.modeCount += 1
                if result:
                    result[self.modeCount - 1] = val
        
        def inorder(root):
            if root is None:
                return
            inorder(root.left)
            handleVal(root.val)
            inorder(root.right)
            
        inorder(root)
        result = [0] * self.modeCount
        self.currCount = 0
        self.modeCount = 0
        inorder(root)
        return result
