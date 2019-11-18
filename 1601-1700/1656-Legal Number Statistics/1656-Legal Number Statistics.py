class Solution:
    """
    @param a: the array a
    @param L: the integer L
    @param R: the integer R
    @return: Return the number of legal integers
    """
    def getNum(self, a, L, R):
        # Write your code here
        return sum(1 for x in a if L <= x <= R)
