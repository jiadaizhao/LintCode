class Solution:
    """
    @param citations: a list of integers
    @return: return a integer
    """
    def hIndex(self, citations):
        # write your code here
        n = len(citations)
        count = [0] * (1 + n)
        for c in citations:
            count[min(c, n)] += 1
        h = n
        num = count[n]
        while num < h:
            h -= 1
            num += count[h]
        return h
