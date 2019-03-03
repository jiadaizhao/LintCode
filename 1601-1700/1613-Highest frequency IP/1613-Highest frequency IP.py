import collections
class Solution:
    """
    @param ipLines: ip  address
    @return: return highestFrequency ip address
    """
    def highestFrequency(self, ipLines):
        # Write your code here
        return collections.Counter(ipLines).most_common(1)[0][0]
