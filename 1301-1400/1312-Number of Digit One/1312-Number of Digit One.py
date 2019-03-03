class Solution:
    """
    @param n: an integer 
    @return: the total number of digit 1
    """
    def countDigitOne(self, n):
        # write your code here
        if n < 0:
            return 0
        base = 1
        count = 0
        while n // base != 0:
            curr = n // base % 10
            low = n % base
            high = n // (base * 10)
            if curr < 1:
                count += high * base
            elif curr == 1:
                count += high * base + low + 1
            else:
                count += (high + 1) * base
            base *= 10
        return count
