class Solution:
    """
    @param n: a integer
    @return: return a integer
    """
    def trailingZeroes(self, n):
        # write your code here
        count = 0
        while n >= 5:
            n //= 5
            count += n
        return count
