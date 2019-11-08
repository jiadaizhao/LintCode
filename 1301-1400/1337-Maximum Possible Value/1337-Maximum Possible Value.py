class Solution:
    """
    @param N: an integer
    @return: returns the maximum possible value obtained by inserting one '5' digit
    """
    def MaximumPossibleValue(self, N):
        # write your code here
        if N >= 0:
            num = str(N)
            for i in range(len(num)):
                if '5' > num[i]:
                    return int(num[:i] + '5' + num[i:])
            
        else:
            num = str(N)
            for i in range(1, len(num)):
                if '5' < num[i]:
                    return int(num[:i] + '5' + num[i:])
            
        return int(num + '5')
