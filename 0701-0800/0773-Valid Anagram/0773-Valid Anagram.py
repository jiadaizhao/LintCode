import collections
class Solution:
    """
    @param s: string s
    @param t: string t
    @return: Given two strings s and t, write a function to determine if t is an anagram of s.
    """
    def isAnagram(self, s, t):
        # write your code here
        return collections.Counter(s) == collections.Counter(t)
