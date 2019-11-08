import collections
class TrieNode:
    def __init__(self):
        self.next = collections.defaultdict(TrieNode)
        
        
class Solution:
    """
    @param words: 
    @return: nothing
    """
    def minimumLengthEncoding(self, words):
        root = TrieNode()
        table = []
        for word in set(words):
            node = root
            for c in word[::-1]:
                node = node.next[c]
            table.append([node, len(word) + 1])
            
        return sum(l for node, l in table if not node.next)
