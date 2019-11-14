class DirectedGraphNode:
    def __init__(self, x):
        self.label = x
        self.neighbors = []

class Solution:
    def serialize(self, root):
        
        def dfs(root):
            if root is None:
                return '[]'
                
            result = ['[', str(root.label)]
            for neighbor in root.neighbors:
                result.append(dfs(neighbor))
            result.append(']')
            return ''.join(result)
            
        if not root:
            return '[]'
        return dfs(root[0])
        
    def deserialize(self, data):
        if data == '[]':
            return None
            
        i = 1
        num = 0
        n = len(data)
        while i < n - 1 and data[i].isdigit():
            num = num * 10 + int(data[i])
            i += 1
            
        node = DirectedGraphNode(num)
        St = []
        while i < n - 1:
            if data[i] == '[':
                St.append(node)
                i += 1
                num = 0
                while i < n - 1 and data[i].isdigit():
                    num = num * 10 + int(data[i])
                    i += 1
                node = DirectedGraphNode(num)
            elif data[i] == ']':
                i += 1
                St[-1].neighbors.append(node)
                node = St.pop()
                
        return node
