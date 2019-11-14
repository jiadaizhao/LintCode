class Solution:
    def levelOrder(self, root):
        if not root:
            return []
        level = [root[0]]
        result = []
        while level:
            result.append([node.label for node in level])
            level = [neighbor for node in level for neighbor in node.neighbors]
        return result
