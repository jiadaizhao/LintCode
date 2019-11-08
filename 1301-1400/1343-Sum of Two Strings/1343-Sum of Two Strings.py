class Solution:
    """
    @param n: an integer
    @return: return an integer
    """
    def reverseBits(self, n):
        # write your code here
        i = result = 0
        while n:
            result = (result << 1) + (n & 1)
            n >>= 1
            i += 1
        return result << (32 - i)
