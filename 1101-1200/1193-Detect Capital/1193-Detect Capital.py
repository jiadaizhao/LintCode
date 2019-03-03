class Solution:
    """
    @param word: a string
    @return: return a boolean
    """
    def detectCapitalUse(self, word):
        # write your code here
        return word.isupper() or word.islower() or word.istitle()
