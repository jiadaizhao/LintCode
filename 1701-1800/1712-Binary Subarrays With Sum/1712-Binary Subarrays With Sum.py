class Solution:
    """
    @param A: an array
    @param S: the sum
    @return: the number of non-empty subarrays
    """
    def numSubarraysWithSum(self, A, S):
        # Write your code here.
        table = [0] * (len(A) + 1)
        table[0] = 1
        curr = count = 0
        for a in A:
            curr += a
            if curr >= S:
                count += table[curr - S]
            table[curr] += 1
            
        return count
