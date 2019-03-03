class Solution:
    """
    @param s: a string
    @return: the number of substrings
    """
    def countBinarySubstrings(self, s):
        # Write your code here
        count, prev, curr = 0, 0, 1
        for i in range(1, len(s)):
            if s[i] != s[i - 1]:
                count += min(prev, curr)
                prev = curr
                curr = 1
            else:
                curr += 1
        return count + min(prev, curr)
