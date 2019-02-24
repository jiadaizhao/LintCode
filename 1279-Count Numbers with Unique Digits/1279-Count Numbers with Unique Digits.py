class Solution:
    """
    @param n: a non-negative integer
    @return: number of numbers with unique digits
    """
    def countNumbersWithUniqueDigits(self, n):
        # Write your code here 
        count = 1
        base = 9
        product = 9
        for _ in range(1, min(n+1, 11)):
            count += product
            product *= base
            base -= 1
        return count
