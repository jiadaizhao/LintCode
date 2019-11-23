class Solution:
    """
    @param A: a array
    @return: is it monotonous
    """
    def isMonotonic(self, A):
        # Write your code here.
        inc = dec = False
        for i in range(len(A) - 1):
            if A[i] > A[i + 1]:
                if inc:
                    return False
                dec = True
            elif A[i] < A[i + 1]:
                if dec:
                    return False
                inc = True
                
        return True
