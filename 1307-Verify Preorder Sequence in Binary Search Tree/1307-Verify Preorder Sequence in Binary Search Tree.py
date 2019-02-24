import math
class Solution:
    """
    @param preorder: List[int]
    @return: return a boolean
    """
    def verifyPreorder(self, preorder):
        # write your code here
        root = -math.inf
        i = 0
        for num in preorder:
            if num < root:
                return False
            while i != 0 and preorder[i - 1] < num:
                root = preorder[i - 1]
                i -= 1
                
            preorder[i] = num
            i += 1
        return True
