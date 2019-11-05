# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

import collections
class Solution(object):
    def findDuplicateSubtrees(self, root):
        """
        :type root: TreeNode
        :rtype: List[TreeNode]
        """
        table = collections.Counter()
        result = []
        def dfs(root):
            if root is None:
                return "#"
            s = '{},{},{}'.format(root.val, dfs(root.left), dfs(root.right))
            table[s] += 1
            if table[s] == 2:
                result.append(root)
            return s
                
        dfs(root)
        return result
