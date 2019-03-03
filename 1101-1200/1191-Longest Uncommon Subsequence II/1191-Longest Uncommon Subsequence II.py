class Solution:
    """
    @param strs: List[str]
    @return: return an integer
    """
    def findLUSlength(self, strs):
        # write your code here
        strs.sort(key = lambda x: -len(x))
        def isSubstring(a, b):
            i = j = 0
            while i < len(a) and j < len(b):
                if a[i] == b[j]:
                    i += 1
                j += 1
            return i == len(a)
        for i, s1 in enumerate(strs):
            if all(not isSubstring(s1, s2) for j, s2 in enumerate(strs) if i != j):
                return len(s1)
        return -1
