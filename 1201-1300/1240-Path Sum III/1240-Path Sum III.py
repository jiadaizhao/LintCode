"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

import collections
class Solution:
    """
    @param root: 
    @param sum: 
    @return: the num of sum path
    """
    def pathSum(self, root, sum):
        # write your code here
        table = collections.Counter([0])
        count = 0
        def dfs(root, curr):
            if root is None:
                return
            curr += root.val
            nonlocal count
            count += table[curr - sum]
            table[curr] += 1
            dfs(root.left, curr)
            dfs(root.right, curr)
            table[curr] -= 1
            
        dfs(root, 0)
        return count
