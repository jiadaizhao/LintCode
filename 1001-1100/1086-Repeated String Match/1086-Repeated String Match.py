class Solution:
    """
    @param A: a string
    @param B: a string
    @return: return an integer
    """
    def repeatedStringMatch(self, A, B):
        # write your code here
        num = (len(B) - 1) // len(A) + 1
        for i in range(2):
            if B in A * (num + i):
                return num + i
        return -1
