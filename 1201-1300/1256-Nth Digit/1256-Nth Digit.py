class Solution:
    """
    @param n: a positive integer
    @return: the nth digit of the infinite integer sequence
    """
    def findNthDigit(self, n):
        # write your code here
        count = 9
        base = 1
        while n > count * base:
            n -= count * base
            count *= 10
            base += 1
            
        index0 = (n - 1) // base
        index1 = (n - 1) % base
        target = 10 ** (base - 1) + index0
        return target // (10 ** (base - 1 - index1)) % 10
