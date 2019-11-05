class Solution:
    """
    @param words: the words
    @param S: the string
    @return: the string with least number of tags
    """
    def boldWords(self, words, S):
        # Write your code here
        bold = [False] * len(S)
        for word in words:
            index = S.find(word)
            while index != -1:
                for i in range(len(word)):
                    bold[index + i] = True
                index = S.find(word, index + 1)

        result = []
        for i in range(len(S)):
            if bold[i] and (i == 0 or not bold[i - 1]):
                result.append('<b>')
            result.append(S[i])
            if bold[i] and (i == len(S) - 1 or not bold[i + 1]):
                result.append('</b>')
        
        return ''.join(result)
