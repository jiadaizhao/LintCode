class Solution:
    """
    @param num: an integer
    @return: convert the integer to hexadecimal
    """
    def toHex(self, num):
        # Write your code here
        if num == 0:
            return '0'
        table = '0123456789abcdef'
        result = []
        for i in range(8):
            result.append(table[num&15])
            num //= 16
            if num == 0:
                break
        return ''.join(result[::-1]).lstrip('0')
