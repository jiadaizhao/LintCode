class Solution:
    """
    @param words: an array of string
    @param maxWidth: a integer
    @return: format the text such that each line has exactly maxWidth characters and is fully
    """
    def fullJustify(self, words, maxWidth):
        # write your code here
        result = []
        curr = []
        num = 0
        for word in words:
            if num + len(word) + len(curr) > maxWidth:
                for i in range(maxWidth - num):
                    curr[i%(len(curr) - 1 or 1)] += ' '
                result.append(''.join(curr))
                curr, num = [], 0
            curr += [word]
            num += len(word)
        return result + [' '.join(curr).ljust(maxWidth)]
