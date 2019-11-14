class UndirectedGraphNode:
     def __init__(self, x):
         self.label = x
         self.neighbors = []


class Solution:
    """
    @param root: the tree
    @return: pre order of the tree
    """
    def preorder(self, root):
        # write your code here
        if root is None:
            return []
            
        St = [root]
        result = []
        while St:
            node = St.pop()
            result.append(node.label)
            St.extend(node.neighbors[::-1])
            
        return result
