class Solution:
    """
    @param N: an integer
    @return: return any beautiful array A
    """
    def beautifulArray(self, N):
        # write your code here.
        result = [1]
        while len(result) < N:
            result = [i * 2 - 1 for i in result] + [i * 2 for i in result]
        return [i for i in result if i <= N]
