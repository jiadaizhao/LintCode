class Solution:
    """
    @param words1: 
    @param words2: 
    @param pairs: 
    @return: Whether sentences are similary or not?
    """
    def areSentencesSimilarTwo(self, words1, words2, pairs):
        if len(words1) != len(words2):
            return False
        
        parent = {}
        def findParent(word):
            while parent[word] != word:
                parent[word] = parent[parent[word]]
                word = parent[word]
                
            return word
            
        for p in pairs:
            word1 = p[0]
            word2 = p[1]
            if word1 not in parent:
                parent[word1] = word1
            if word2 not in parent:
                parent[word2] = word2
                
            p1 = findParent(word1)
            p2 = findParent(word2)
            if p1 != p2:
                parent[p1] = p2
                
        for word1, word2 in zip(words1, words2):
            if word1 == word2:
                continue
            
            if ((word1 not in parent) or (word2 not in parent) or
                findParent(word1) != findParent(word2)):
                return False
                
        return True
