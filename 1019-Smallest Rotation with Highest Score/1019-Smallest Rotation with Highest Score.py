class Solution:
    """
    @param A: an array
    @return: the smallest index K that corresponds to the highest score we could receive
    """
    def bestRotation(self, A):
        # Write your code here
        n = len(A)
        scores = [1] * n
        for i in range(n):
            scores[(i - A[i] + 1 + n) % n] -= 1
            
        for i in range(1, n):
            scores[i] += scores[i - 1]
        return scores.index(max(scores))
