class Solution:
    """
    @param str: the str
    @return: the delete positon
    """
    def deleteString(self, str):
        # Write your code here.
        for i in range(len(str) - 1):
            if str[i] > str[i + 1]:
                return str[:i] + str[i + 1:]
        return str[:-1]
