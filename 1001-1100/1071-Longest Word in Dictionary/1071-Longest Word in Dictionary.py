import collections
class TrieNode:
    def __init__(self):
        self.next = collections.defaultdict(TrieNode)
        self.index = -1
        
class Trie:
    def __init__(self):
        self.root = TrieNode()
        
    def insert(self, word, index):
        node = self.root
        for c in word:
            node = node.next[c]
        node.index = index
        
    def search(self, words):
        St = [self.root]
        result = ''
        while St:
            node = St.pop()
            if node.index != -1 or node == self.root:
                if node.index != -1:
                    word = words[node.index]
                    if len(word) > len(result) or len(word) == len(result) and word < result:
                        result = word
                
                for n in node.next.values():
                    St.append(n)
        return result

class Solution:
    """
    @param words: a list of strings
    @return: the longest word in words that can be built one character at a time by other words in words
    """
    def longestWord(self, words):
        # Write your code here
        trie = Trie()
        for i, word in enumerate(words):
            trie.insert(word, i)
        return trie.search(words)
