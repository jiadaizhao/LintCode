class Solution:
    """
    @param x: an array of n positive numbers
    @return: determine if your path crosses itself
    """
    def isSelfCrossing(self, x):
        # write your code here
        if len(x) < 4:
            return False
        for i in range(3, len(x)):
            # Line 4 crosses line 1.
            if x[i] >= x[i - 2] and x[i - 3] >= x[i - 1]:
                return True
            
            # Line 5 crosses line 1.
            if i > 3 and x[i - 1] == x[i - 3] and x[i] + x[i - 4] >= x[i - 2]:
                return True
            
            # Line 6 crosses line 1.
            if (i > 4 and x[i - 2] > x[i - 4] and x[i] + x[i - 4] >= x[i - 2] and
                x[i - 3] > x[i - 1] and x[i - 5] + x[i - 1] >= x[i - 3]):
                return True
        return False
