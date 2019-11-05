import collections
class Solution:
    """
    @param s: a string
    @return: the length of the longest substring T that contains at most 2 distinct characters
    """
    def lengthOfLongestSubstringTwoDistinct(self, s):
        # Write your code here
        maxLen = start = count = 0
        table = collections.Counter()
        for i, c in enumerate(s):
            table[c] += 1
            if table[c] == 1:
                count += 1
            while count > 2:
                table[s[start]] -= 1
                if table[s[start]] == 0:
                    count -= 1
                start += 1
            maxLen = max(maxLen, i - start + 1)
        
        return maxLen
