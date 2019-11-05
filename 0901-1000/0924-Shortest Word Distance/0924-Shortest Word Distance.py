class Solution:
    """
    @param words: a list of words
    @param word1: a string
    @param word2: a string
    @return: the shortest distance between word1 and word2 in the list
    """
    def shortestDistance(self, words, word1, word2):
        # Write your code here
        i1 = i2 = -1
        minDist = len(words)
        for i, word in enumerate(words):
            if word == word1:
                i1 = i
            elif word == word2:
                i2 = i

            if i1 != -1 and i2 != -1:
                minDist = min(minDist, abs(i1 - i2))
        
        return minDist
