class Solution:
    """
    @param words: List[str]
    @return: return List[str]
    """
    def findAllConcatenatedWordsInADict(self, words):
        # write your code here
        words.sort(key=lambda x: len(x))
        result = []
        table = set()
        def isConcatenated(word):
            if not word:
                return False
                
            dp = [False] * (1 + len(word))
            dp[0] = True
            for j in range(1, 1 + len(word)):
                for i in range(j - 1, -1, -1):
                    if dp[i] and word[i:j] in table:
                        dp[j] = True
                        break
            
            return dp[-1]
            
        for word in words:
            if isConcatenated(word):
                result.append(word)
            else:
                table.add(word)
        
        return result
