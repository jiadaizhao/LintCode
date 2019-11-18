class Solution:
    """
    @param a: the array a
    @param q: the queries q
    @return: for each query, return the number of legal integers 
    """
    def getAns(self, a, q):
        # write your code here
        return [sum(1 for x in a if L <= x <= R) for L, R in q]
