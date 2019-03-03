import bisect
class Solution:
    """
    @param a: array a
    @param b: the query array
    @return: Output an array of length `b.length` to represent the answer
    """
    def minimalDistance(self, a, b):
        # Write your code here 
        a.sort()
        result = [0]*len(b)
        for i, num in enumerate(b):
            index = bisect.bisect_left(a, num)
            if index == 0:
                result[i] = a[0]
            elif index == len(a):
                result[i] = a[-1]
            elif num - a[index - 1] <= a[index] - num:
                result[i] = a[index - 1]
            else:
                result[i] = a[index]
        return result
