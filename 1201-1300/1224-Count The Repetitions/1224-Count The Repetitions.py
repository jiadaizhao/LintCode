class Solution:
    """
    @param s1: the first string
    @param n1: the repeat times of the first string
    @param s2: the second string
    @param n2: the repeat times of the second string
    @return: the maximum integer
    """
    def getMaxRepetitions(self, s1, n1, s2, n2):
        # Write your code here
        repeatCount = [0]*(1+len(s2))
        nextIndex = [0]*(1+len(s2))
        index = 0
        count = 0
        for k in range(n1):
            for c in s1:
                if c == s2[index]:
                    index += 1
                    if index == len(s2):
                        count += 1
                        index = 0
            repeatCount[k] = count
            nextIndex[k] = index
            for p in range(k):
                if nextIndex[p] == index:
                    prefixCount = repeatCount[p]
                    repeatedPatternCount = (n1 - p - 1) // (k - p) * (repeatCount[k] - repeatCount[p])
                    suffixCount = repeatCount[p + (n1 - p - 1)%(k - p)] - repeatCount[p]
                    return (prefixCount + repeatedPatternCount + suffixCount) // n2
        return count // n2
