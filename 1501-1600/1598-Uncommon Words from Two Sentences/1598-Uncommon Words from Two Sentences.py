import collections
class Solution:
    """
    @param A: Sentence A
    @param B: Sentence B
    @return: Uncommon Words from Two Sentences
    """
    def uncommonFromSentences(self, A, B):
        # Write your code here.
        table = collections.Counter((A + ' ' + B).split())
        return [word for word in table if table[word] == 1]
