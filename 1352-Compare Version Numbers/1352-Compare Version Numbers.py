from itertools import zip_longest
class Solution:
    """
    @param version1: the first given number
    @param version2: the second given number
    @return: the result of comparing
    """
    def compareVersion(self, version1, version2):
        # Write your code here
        v1 = map(int, version1.split('.'))
        v2 = map(int, version2.split('.'))
        v1, v2 = zip(*zip_longest(v1, v2, fillvalue=0))
        return (v1 > v2) - (v1 < v2)
