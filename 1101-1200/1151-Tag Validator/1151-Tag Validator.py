import re
class Solution:
    """
    @param code: the given code
    @return: whether it is valid
    """
    def isValid(self, code):
        # Write your code here
        code = re.sub(r'<!\[CDATA\[.*?\]\]>|t', '-', code)
        prev = None
        while code != prev:
            prev = code
            code = re.sub(r'<([A-Z]{1,9})>[^<]*</\1>', 't', code)
        return code == 't'
