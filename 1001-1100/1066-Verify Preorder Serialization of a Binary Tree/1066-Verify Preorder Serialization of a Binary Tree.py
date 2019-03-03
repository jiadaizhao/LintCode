class Solution:
    """
    @param preorder: a string
    @return: return a bool
    """
    def isValidSerialization(self, preorder):
        # write your code here
        degree = 1
        for s in preorder.split(','):
            degree -= 1
            if degree < 0:
                return False
            if s != '#':
                degree += 2
        return degree == 0