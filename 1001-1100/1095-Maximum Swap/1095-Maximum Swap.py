class Solution:
    """
    @param num: a non-negative intege
    @return: the maximum valued number
    """
    def maximumSwap(self, num):
        # Write your code here
        last = [0] * 10
        s = list(str(num))
        for i, c in enumerate(s):
            last[ord(c) - ord('0')] = i
        
        for i, c in enumerate(s):
            for d in range(9, ord(c) - ord('0'), -1):
                if last[d] > i:
                    s[i], s[last[d]] = s[last[d]], s[i]
                    return int(''.join(s))
        return num
