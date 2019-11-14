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
    @param root: the root of the tree
    @param target: the target
    @param K: the given K
    @return: All Nodes Distance K in Binary Tree
    """
    def distanceK(self, root, target, K):
        # Write your code here
        parents = {}
        def dfs(root, parent):
            if root is None:
                return
            parents[root] = parent
            dfs(root.left, root)
            dfs(root.right, root)
            
        dfs(root, None)
        Q = collections.deque([target])
        visited = set([target])
        dist = 0
        while Q:
            if dist == K:
                return [node.val for node in Q]
            
            for _ in range(len(Q)):
                node = Q.popleft()
                if node.left and node.left not in visited:
                    Q.append(node.left)
                    visited.add(node.left)
                    
                if node.right and node.right not in visited:
                    Q.append(node.right)
                    visited.add(node.right)
                    
                if node != root and parents[node] not in visited:
                    Q.append(parents[node])
                    visited.add(parents[node])
            
            dist += 1
        
        return []
