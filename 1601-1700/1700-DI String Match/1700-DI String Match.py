class Solution:
    def diStringMatch(self, S):
        N = len(S)
        result = [0] * (N + 1)
        left = 0
        right = N
        for i, c in enumerate(S):
            if c == 'I':
                result[i] = left
                left += 1
            else:
                result[i] = right
                right -= 1
        result[N] = left
        return result
