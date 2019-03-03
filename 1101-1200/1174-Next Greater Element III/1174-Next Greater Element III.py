class Solution:
    """
    @param n: an integer
    @return: the smallest 32-bit integer which has exactly the same digits existing in the integer n and is greater in value than n
    """
    def nextGreaterElement(self, n):
        # Write your code here
        num = list(str(n))
        i = len(num) - 2
        while i >= 0:
            if num[i] < num[i + 1]:
                break
            i -= 1
        if i == -1:
            return -1
        
        j = len(num) - 1
        while num[j] <= num[i]:
            j -= 1
        num[i], num[j] = num[j], num[i]
        result = int(''.join(num[:i + 1] + num[i + 1:][::-1]))
        return result if result < (1 << 31) else -1
