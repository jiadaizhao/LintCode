class Solution:
    """
    @param licensePlate: a string
    @param words: List[str]
    @return: return a string
    """
    def shortestCompletingWord(self, licensePlate, words):
        # write your code here
        table = [0] * 26
        count = 0
        for c in licensePlate:
            if c.isalpha():
                table[ord(c.lower()) - ord('a')] += 1
                count += 1
                
        minIndex = -1
        for i, word in enumerate(words):
            need = table[:]
            num = count
            for c in word:
                if need[ord(c) - ord('a')] > 0:
                    need[ord(c) - ord('a')] -= 1
                    num -= 1
                    if num == 0:
                        if minIndex == -1 or len(word) < len(words[minIndex]):
                            minIndex = i
                        break
        return words[minIndex]
