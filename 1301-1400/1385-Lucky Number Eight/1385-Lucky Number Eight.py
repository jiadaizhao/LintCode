class Solution:
    """
    @param n: count lucky numbers from 1 ~ n
    @return: the numbers of lucky number
    """
    def luckyNumber(self, n):
        # Write your code here
        return sum('8' in str(i) for i in range(1, n + 1))
