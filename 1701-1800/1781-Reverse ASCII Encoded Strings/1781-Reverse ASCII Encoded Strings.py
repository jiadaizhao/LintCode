class Solution:
    """
    @param encodeString: an encode string
    @return: a reversed decoded string
    """
    def reverseAsciiEncodedString(self, encodeString):
        # Write your code here
        return ''.join(chr(int(encodeString[i:i + 2])) for i in range(len(encodeString) - 2, -1, -2))
