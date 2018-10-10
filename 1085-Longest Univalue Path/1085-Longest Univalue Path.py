"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: 
    @return: the length of the longest path where each node in the path has the same value
    """
    def longestUnivaluePath(self, root):
        # Write your code here
        self.maxLen = 0
        def dfs(root):
            if root is None:
                return -1
            currLen = 0
            length = 0
            if root.left:
                leftLen = dfs(root.left)
                if root.left.val == root.val:
                    currLen += 1 + leftLen
                    length = 1 + leftLen
            if root.right:
                rightLen = dfs(root.right)
                if root.right.val == root.val:
                    currLen += 1 + rightLen
                    length = max(length, 1 + rightLen)
            self.maxLen = max(self.maxLen, currLen)
            return length
        
        dfs(root)
        return self.maxLen
