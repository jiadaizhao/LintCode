class Solution:
    """
    @param s: a string
    @param words: a list of words
    @return: all starting indices of substring(s)
    """
    def findSubstring(self, s, words):
        # write your code here
        m = len(s)
        target = len(words)
        result = []
        if m == 0 or target == 0:
            return result
        n = len(words[0])
        expected = collections.Counter(words)
        for i in range(n):
            seen = collections.Counter()
            count = 0
            for j in range(i, m - n + 1, n):
                word = s[j: j + n]
                if word not in expected:
                    count = 0
                    seen.clear()
                else:
                    count += 1
                    seen[word] += 1
                    while seen[word] > expected[word]:
                        deletedWord = s[j - (count - 1)*n: j - (count - 2)*n]
                        seen[deletedWord] -= 1
                        count -= 1
                if count == target:
                    result.append(j - (count - 1)*n)
                    firstWord = s[j - (count - 1)*n: j - (count - 2)*n]
                    seen[firstWord] -= 1
                    count -= 1

        return result
