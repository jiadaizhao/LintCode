class Solution:
    """
    @param n: A Integer
    @return: return the list of Rotation Number in 1-n
    """
    def RotationNumber(self, n):
        # write your code here
        result = []
        def rotate(num, upper):
            res = ''
            for c in num:
                if c == '0' or c == '8':
                    res += c
                elif c == '6':
                    res += '9'
                elif c == '9':
                    res += '6'
                else:
                    return False
            return res != num and int(res) <= upper
        for i in range(6, n + 1):
            if rotate(str(i), n):
                result.append(i)
        return result
