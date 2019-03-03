class Solution:
    """
    @param n: a positive integer represented by string
    @return:  the closest integer which is a palindrome
    """
    def nearestPalindromic(self, n):
        # Write your code here
        l = len(n)
        candidates = [10 ** l + 1, 10 ** (l - 1) - 1]
        prefix = int(n[:(l + 1) // 2])
        for head in map(str, (prefix - 1, prefix, prefix + 1)):
            candidates.append(int(head + (head[:-1] if l & 1 else head)[::-1]))
        num = int(n)
        minDiff = minVal = num        
        for c in candidates:
            if c != num:
                diff = abs(num - c)
                if diff < minDiff:
                    minDiff = diff
                    minVal = c
                elif diff == minDiff and c < minVal:
                    minVal = c
        return str(minVal)
