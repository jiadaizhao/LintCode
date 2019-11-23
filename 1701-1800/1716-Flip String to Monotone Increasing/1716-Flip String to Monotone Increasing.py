class Solution:
    """
    @param S: a string
    @return: the minimum number
    """
    def minFlipsMonoIncr(self, S):
        # Write your code here.
        minFlip = count1 = 0
        for c in S:
            if c == '1':
                count1 += 1
            else:
                minFlip = min(minFlip + 1, count1)
        return minFlip
