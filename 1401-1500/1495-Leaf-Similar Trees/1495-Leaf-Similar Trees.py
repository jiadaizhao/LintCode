"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root1: the first tree
    @param root2: the second tree
    @return: returns whether the leaf sequence is the same
    """
    def leafSimilar(self, root1, root2):
        # write your code here.
        def dfs(root):
            if root:
                if root.left is None and root.right is None:
                    yield root.val
                else:
                    yield from dfs(root.left)
                    yield from dfs(root.right)
                    
        return list(dfs(root1)) == list(dfs(root2))
