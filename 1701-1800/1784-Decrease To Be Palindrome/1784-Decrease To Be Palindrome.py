class Solution:
    """
    @param s: the string s
    @return: the number of operations at least
    """
    def numberOfOperations(self, s):
        # Write your code here
        left = total = 0
        right = len(s) - 1
        while left < right:
            total += abs(ord(s[left]) - ord(s[right]))
            left += 1
            right -= 1
        return total
