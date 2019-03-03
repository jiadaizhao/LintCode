class Solution:
    """
    @param n: a integer
    @return: return a integer
    """
    def lastRemaining(self, n):
        # write your code here
        left = True
        head = 1
        step = 1
        while n > 1:
            if left or (n&1):
                head += step
            step *= 2
            n //= 2
            left = not left
        return head
