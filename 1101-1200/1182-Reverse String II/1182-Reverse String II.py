class Solution:
    """
    @param s: the string
    @param k: the integer k
    @return: the answer
    """
    def reverseStringII(self, s, k):
        # Write your code here.
        l = list(s)
        for i in range(0, len(l), k * 2):
            l[i: i + k] = l[i: i + k][::-1]
        return ''.join(l)
