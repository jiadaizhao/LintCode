import collections
class Solution:
    """
    @param aString: letter string
    @return: the Minimum times
    """
    def Kstart(self, aString):
        # write your code here
        table = collections.Counter(aString)
        delete = 0
        used = set()
        for num in table.values():
            while num in used and num != 0:
                delete += 1
                num -= 1
            used.add(num)
            
        return delete
