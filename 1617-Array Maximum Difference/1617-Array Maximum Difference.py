import math
class Solution:
    """
    @param a: the array a
    @return: return the maximum value
    """
    def getAnswer(self, a):
        # Write your code here
        minOdd = math.inf
        maxVal = 0
        for num in a:
            if num&1:
                minOdd = min(minOdd, num)
            elif num > minOdd:
                maxVal = max(maxVal, num - minOdd)
        return maxVal
