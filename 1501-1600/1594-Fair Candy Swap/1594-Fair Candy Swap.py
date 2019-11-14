class Solution:
    """
    @param A: an array
    @param B: an array
    @return: an integer array
    """
    def fairCandySwap(self, A, B):
        # Write your code here.
        diff = (sum(B) - sum(A)) // 2
        setB = set(B)
        for a in A:
            if a + diff in setB:
                return [a, a + diff]
