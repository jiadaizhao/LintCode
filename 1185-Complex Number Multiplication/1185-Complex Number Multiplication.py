class Solution:
    """
    @param a: a string
    @param b: a string
    @return: a string representing their multiplication
    """
    def complexNumberMultiply(self, a, b):
        # Write your code here
        ra, ia = map(int, a[:-1].split('+'))
        rb, ib = map(int, b[:-1].split('+'))
        return '{}+{}i'.format(ra * rb - ia * ib, ra * ib + rb * ia)
