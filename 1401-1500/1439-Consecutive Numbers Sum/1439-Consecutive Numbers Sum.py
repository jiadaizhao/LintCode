class Solution:
    """
    @param N: an integer
    @return: how many ways can we write it as a sum of consecutive positive integers
    """
    def consecutiveNumbersSum(self, N):
        # Write your code here
        count = 1
        i = 2
        left = N - i * (i - 1) / 2
        while left > 0:
            if left % i == 0:
                count += 1
            i += 1
            left = N - i * (i - 1) / 2
        return count
