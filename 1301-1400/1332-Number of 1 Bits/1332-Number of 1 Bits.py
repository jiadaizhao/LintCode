class Solution:
    """
    @param n: an unsigned integer
    @return: the number of Ã¢ÂÂ1' bits
    """
    def hammingWeight(self, n):
        # write your code here
        count = 0
        while n:
            n &= n - 1
            count += 1
        return count
