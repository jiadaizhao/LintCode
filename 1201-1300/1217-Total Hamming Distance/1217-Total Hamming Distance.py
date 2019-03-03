class Solution:
    """
    @param nums: the gievn integers
    @return: the total Hamming distance between all pairs of the given numbers
    """
    def totalHammingDistance(self, nums):
        # Write your code here
        return sum(b.count('1') * b.count('0') for b in zip(*map('{:032b}'.format, nums)))
