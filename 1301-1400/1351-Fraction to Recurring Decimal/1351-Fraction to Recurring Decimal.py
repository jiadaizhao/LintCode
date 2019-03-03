class Solution:
    """
    @param numerator: a integer
    @param denominator: a integer
    @return: return a string
    """
    def fractionToDecimal(self, numerator, denominator):
        # write your code here
        result = []
        if numerator // denominator < 0:
            result.append('-')
        num = abs(numerator)
        den = abs(denominator)
        result.append(str(num // den))
        rem = num % den
        if rem == 0:
            return ''.join(result)
        result.append('.')
        l = len(result)
        table = {}
        while rem:
            table[rem] = l
            rem *= 10
            l += 1
            result.append(str(rem // den))
            rem %= den
            if rem in table:
                result.insert(table[rem], '(')
                result.append(')')
                break
        return ''.join(result)
