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
    @param root: the root
    @return: the maximum width of the given tree
    """
    def widthOfBinaryTree(self, root):
        # Write your code here
        if root is None:
            return 0
        maxWid = 1
        Q = collections.deque([(root, 0)])
        while Q:
            left = Q[0][1]
            index = left
            qs = len(Q)
            for i in range(qs):
                node, index = Q.popleft()
                if node.left:
                    Q.append((node.left, index * 2))
                if node.right:
                    Q.append((node.right, index * 2 + 1))
            maxWid = max(maxWid, index - left + 1)
        return maxWid
