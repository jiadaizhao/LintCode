class Solution:
    """
    @param words: a list of strings
    @return: return a list of strings
    """
    def findWords(self, words):
        # write your code here
        first = set('qwertyuiop')
        second = set('asdfghjkl')
        third = set('zxcvbnm')
        result = []
        for word in words:
            curr = set(word.lower())
            if curr.issubset(first) or curr.issubset(second) or curr.issubset(third):
                result.append(word)
        return result
