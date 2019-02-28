import re
import collections
class Solution:
    """
    @param paragraph: 
    @param banned: 
    @return: nothing
    """
    def mostCommonWord(self, paragraph, banned):
        ban = set(banned)
        words = re.findall(r'\w+', paragraph.lower())
        return collections.Counter(word for word in words if word not in ban).most_common(1)[0][0]