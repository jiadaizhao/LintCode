class Solution:
    """
    @param N: the row
    @param K: the index
    @return:  the K-th indexed symbol in row N
    """
    def kthGrammar(self, N, K):
        # Write your code here
        return bin(K - 1).count('1') & 1
