class Solution:
    """
    @param str: the input string
    @return: The lower case string
    """
    def toLowerCase(self, str):
        # Write your code here
        return ''.join(chr(ord(c) - ord('A') + ord('a')) if 'A' <= c <= 'Z' else c for c in str)