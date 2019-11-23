class Solution:
    """
    @param S: a string
    @param K: int
    @return: the lexicographically smallest string
    """
    def orderlyQueue(self, S, K):
        # Write your code here.
        if K > 1:
            return ''.join(sorted(S))
        else:
            return min(S[i:] + S[:i] for i in range(len(S)))
