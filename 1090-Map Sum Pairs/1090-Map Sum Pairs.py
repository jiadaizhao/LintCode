import collections
class TrieNode:
    
    def __init__(self):
        self.next = collections.defaultdict(TrieNode)
        self.sum = 0

class MapSum:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = TrieNode()
        self.table = {}

    def insert(self, key, val):
        """
        :type key: str
        :type val: int
        :rtype: void
        """
        diff = val - self.table.get(key, 0)
        if diff != 0:
            self.table[key] = val
            node = self.root
            for c in key:
                node = node.next[c]
                node.sum += diff

    def sum(self, prefix):
        """
        :type prefix: str
        :rtype: int
        """
        node = self.root
        for c in prefix:
            if c not in node.next:
                return 0
            node = node.next[c]
        return node.sum


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)