class Solution:
    """
    @param num: the num
    @return: the array subject to the description
    """
    def calculateNumber(self, num):
        # Write your code here.
        count = 0
        i = 0
        pos = []
        while num:
            if num & 1:
                count += 1
                pos.append(i)
            
            i += 1
            num >>= 1
            
        return [count] + [i - p for p in pos[::-1]]
