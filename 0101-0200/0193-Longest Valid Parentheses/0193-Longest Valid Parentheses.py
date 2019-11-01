class Solution:
    """
    @param s: a string
    @return: return a integer
    """
    def longestValidParentheses(self, s):
        # write your code here
        left = right = maxLen = 0
        for c in s:
            if c == '(':
                left += 1
            else:
                right += 1
            if left == right:
                maxLen = max(maxLen, left * 2)
            if right > left:
                left = right = 0
        
        left = right = 0        
        for c in s[::-1]:
            if c == '(':
                left += 1
            else:
                right += 1
                
            if left == right:
                maxLen = max(maxLen, left * 2)
            if left > right:
                left = right = 0
        
        return maxLen
