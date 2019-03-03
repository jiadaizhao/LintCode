class Solution:
    """
    @param N: a positive number
    @return: how many numbers X from 1 to N are good
    """
    def rotatedDigits(self, N):
        # write your code here
        count = 0
        for i in range(1, N + 1):
            s = str(i)
            count += all(c not in '347' for c in s) and any(c in '2569' for c in s)
        return count
