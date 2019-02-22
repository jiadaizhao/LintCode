class Solution:
    """
    @param data: an array of integers
    @return: whether it is a valid utf-8 encoding
    """
    def validUtf8(self, data):
        # Write your code here
        if not data:
            return False
        count = 0
        for num in data:
            if count == 0:
                if (num >> 5) == 0b110:
                    count = 1
                elif (num >> 4) == 0b1110:
                    count = 2
                elif (num >> 3) == 0b11110:
                    count = 3
                elif (num >> 7) != 0:
                    return False
            else:
                if (num >> 6) != 0b10:
                    return False
                count -= 1
        return count == 0
