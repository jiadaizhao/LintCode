class UndirectedGraphNode:
     def __init__(self, x):
         self.label = x
         self.neighbors = []

class Solution:
    """
    @param root: the root of the tree
    @return: post order of the tree
    """
    def postorder(self, root):
        # write your code here
        if root is None:
            return []
            
        St = [root]
        result = []
        while St:
            node = St.pop()
            result.append(node.label)
            St.extend(node.neighbors)
            
        return result[::-1]
