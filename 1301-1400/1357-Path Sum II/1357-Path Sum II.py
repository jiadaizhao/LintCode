"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param root: a binary tree
    @param sum: the sum
    @return: the scheme
    """
    def pathSum(self, root, sum):
        # Write your code here.
        result = []
        path = []
        def dfs(root, sum):
            if root is None:
                return
            path.append(root.val)
            sum -= root.val
            if sum == 0 and root.left is None and root.right is None:
                result.append(path[:])
            else:
                dfs(root.left, sum)
                dfs(root.right, sum)
            path.pop()
            
        dfs(root, sum)
        return result
