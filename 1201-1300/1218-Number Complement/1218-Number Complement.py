class Solution:
    """
    @param num: an integer
    @return: the complement number
    """
    def findComplement(self, num):
        # Write your code here
        limit = 1
        while limit <= num:
            limit <<= 1
        return limit - 1 - num
