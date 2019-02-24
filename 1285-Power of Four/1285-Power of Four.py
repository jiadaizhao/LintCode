class Solution:
    """
    @param num: an integer
    @return: whether the integer is a power of 4
    """
    def isPowerOfFour(self, num):
        # Write your code here
        return num > 0 and num&(num - 1) == 0 and (num - 1)%3 == 0
