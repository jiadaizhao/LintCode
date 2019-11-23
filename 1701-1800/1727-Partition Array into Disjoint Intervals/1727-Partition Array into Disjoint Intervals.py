class Solution:
    """
    @param A: 
    @return: return an integer
    """
    def partitionDisjoint(self, A):
        # write your code here
        right = A[:]
        for i in range(len(A) - 2, -1, -1):
            right[i] = min(right[i + 1], A[i])
            
        left = A[0]
        for i in range(len(A) - 1):
            left = max(left, A[i])
            if left <= right[i + 1]:
                return i + 1
                
        return -1
