class Solution:
    """
    @param S: a string
    @return: the starting and ending positions of every large group
    """
    def largeGroupPositions(self, S):
        # Write your code here
        result = []
        i = 0
        while i < len(S):
            start = i
            while i < len(S) and S[i] == S[start]:
                i += 1
            if i - start >= 3:
                result.append([start, i - 1])
        return result
