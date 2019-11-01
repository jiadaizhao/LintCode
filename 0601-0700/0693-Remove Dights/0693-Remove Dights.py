class Solution:
    """
    @param num: a number
    @param k: the k digits
    @return: the smallest number
    """
    def removeKdigits(self, num, k):
        # write your code here.
        St = []
        for c in num:
            while St and c < St[-1] and k > 0:
                St.pop()
                k -= 1
            St.append(c)
        
        return ''.join(St[:len(St) - k]).lstrip('0') or '0'
