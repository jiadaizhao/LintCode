import collections
class Solution:
    """
    @param stringIn: The original string.
    @param K: The length of substrings.
    @return: return the count of substring of length K and exactly K distinct characters.
    """
    def KSubstring(self, stringIn, K):
        # Write your code here
        table = collections.Counter()
        start = 0
        result = set()
        for i in range(len(stringIn)):
            table[stringIn[i]] += 1
            if i - start + 1 == K and len(table) == K:
                result.add(stringIn[start: i + 1])
            if i >= K - 1:
                table[stringIn[start]] -= 1
                if table[stringIn[start]] == 0:
                    del table[stringIn[start]]
                start += 1
        return len(result)
