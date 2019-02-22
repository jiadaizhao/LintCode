class Solution:
    """
    @param s: a string
    @param k: a integer
    @return: return a integer
    """
    def characterReplacement(self, s, k):
        # write your code here
        maxLen = 0
        count = 0
        start = 0
        table = [0]*26
        for i in range(len(s)):
            index = ord(s[i]) - ord('A')
            table[index] += 1
            count = max(count, table[index])
            while i - start + 1 > count + k:
                table[ord(s[start]) - ord('A')] -= 1
                start += 1
            maxLen = max(maxLen, i - start + 1)
        return maxLen
