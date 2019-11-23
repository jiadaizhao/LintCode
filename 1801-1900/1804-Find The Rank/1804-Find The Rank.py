class Solution:
    """
    @param scores: two dimensional array
    @param K: a integer
    @return: return a integer
    """
    def FindTheRank(self, scores, K):
        # write your code here
        rank = [(sum(row), i) for i, row in enumerate(scores)]
        return sorted(rank, key=lambda x: x[0], reverse=True)[K - 1][1]
