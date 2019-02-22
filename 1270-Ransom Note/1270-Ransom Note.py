import collections
class Solution:
    """
    @param ransomNote: a string
    @param magazine: a string
    @return: whether the ransom note can be constructed from the magazines
    """
    def canConstruct(self, ransomNote, magazine):
        # Write your code here
        return not collections.Counter(ransomNote) - collections.Counter(magazine)
