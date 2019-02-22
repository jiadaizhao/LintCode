import collections
class Solution:
    """
    @param s: a string
    @return: return a string
    """
    def originalDigits(self, s):
        # write  your code here
        table = collections.Counter()
        for c in s:
            if c == 'z':        # 0
                table[0] += 1
            elif c == 'o':      # 0, 1, 2, 4
                table[1] += 1
            elif c == 'w':      # 2
                table[2] += 1
            elif c == 't':      # 2, 3, 8
                table[3] += 1
            elif c == 'u':      # 4
                table[4] += 1
            elif c == 'f':      # 4, 5
                table[5] += 1
            elif c == 'x':      # 6
                table[6] += 1
            elif c == 's':      # 6, 7
                table[7] += 1
            elif c == 'g':      # 8
                table[8] += 1
            elif c == 'i':      # 5, 6, 8, 9
                table[9] += 1
        table[1] -= table[0] + table[2] + table[4]
        table[3] -= table[2] + table[8]
        table[5] -= table[4]
        table[7] -= table[6]
        table[9] -= table[5] + table[6] + table[8]
        return ''.join(str(i)*table[i] for i in range(10))
