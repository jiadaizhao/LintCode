class Solution:
    """
    @param str: the origin string
    @return: the start and end of every twitch words
    """
    def twitchWords(self, str):
        # Write your code here
        left = 0
        right = 0
        result = []
        while right < len(str):
            while right < len(str) and str[left] == str[right]:
                right += 1
            if right - left >= 3:
                result.append([left, right - 1])
            left = right
        return result
