class UndirectedGraphNode:
     def __init__(self, x):
         self.label = x
         self.neighbors = []
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None

class Solution:
    """
    @param root: binary tree
    @return: N-ary tree
    """
    def decode(self, root):
        # write your code here
        if root is None:
            return None
            
        result = UndirectedGraphNode(root.val)
        curr = root.left
        while curr:
            result.neighbors.append(self.decode(curr))
            curr = curr.right
            
        return result

    """
    @param root: N-ary tree
    @return: binary tree
    """
    def encode(self, root):
        # write your code here
        if root is None:
            return None
            
        result = TreeNode(root.label)
        if root.neighbors:
            result.left = self.encode(root.neighbors[0])
        curr = result.left
        for neighbor in root.neighbors[1:]:
            curr.right = self.encode(neighbor)
            curr = curr.right
        
        return result
