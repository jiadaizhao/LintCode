class Solution:
    """
    @param target: the target string
    @param s: 
    @return: output all strings containing target  in s
    """
    def getAns(self, target, s):
        # Write your code here
        result = []
        for word in s:
            i = 0
            for c in word:
                if c == target[i]:
                    i += 1
                    if i == len(target):
                        result.append(word)
                        break
        return result
