class Solution:
    """
    @param dic: a dictionary
    @param s: a string
    @return: the longest one existed in the given dictionary
    """
    def longestSubsequence(self, dic, s):
        # Write your code here
        result = ''
        for word in dic:
            i = j = 0
            while i < len(s) and j < len(word):
                if s[i] == word[j]:
                    j += 1
                i += 1
            if j == len(word):
                if len(word) > len(result) or (len(word) == len(result) and word < result):
                    result = word
                    
        return result
