class Solution:
    """
    @param bills: the Bill
    @return: Return true if and only if you can provide every customer with correct change.
    """
    def lemonadeChange(self, bills):
        # Write your code here.
        b5 = b10 = 0
        for b in bills:
            if b == 5:
                b5 += 1
            elif b == 10:
                b10 += 1
                b5 -= 1
            elif b10 > 0:
                b10 -= 1
                b5 -= 1
            else:
                b5 -= 3
                
            if b5 < 0:
                return False
                
        return True
