import collections
class Solution:
    """
    @param A: Integer array
    @param k: a integer
    @return: return is possible to partition the array satisfying the above conditions
    """
    def PartitioningArray(self, A, k):
        # write your code here
        if not A:
            return True
        if len(A) % k:
            return False
            
        group = len(A) // k
        return max(collections.Counter(A).values()) <= group
