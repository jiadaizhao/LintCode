import re
class Solution:
    """
    @param equation: a string
    @return: return a string
    """
    def solveEquation(self, equation):
        # write your code here
        lh, rh = equation.split('=')
        def evalEq(eq):
            res = [0, 0]
            tokens = re.findall(r'-?\d*x*', eq)
            for token in tokens:
                if token == '':
                    continue
                if token == '+x' or token == 'x':
                    res[0] += 1
                elif token == '-x':
                    res[0] -= 1
                elif token[-1] == 'x':
                    res[0] += int(token[:-1])
                else:
                    res[1] += int(token)
            return res
        left = evalEq(lh)
        right = evalEq(rh)
        xc = left[0] - right[0]
        val = right[1] - left[1]
        if xc == 0:
            return "Infinite solutions" if val == 0 else "No solution"
        else:
            return "x=" + str(val // xc)
