class Solution:
    """
    @param A: the run-length encoded sequence
    """
    def __init__(self, A):
        # do some initialization if necessary
        self.A = A
        self.start = 0
        self.num = 0
    
    """
    @param n: the number of elements to exhaust
    @return: exhausts the next n elements and returns the last element exhausted 
    """
    def next(self, n):
        # write your code here
        while self.start < len(self.A):
            if self.num + n <= self.A[self.start]:
                self.num += n
                return self.A[self.start + 1]
            else:
                n -= self.A[self.start] - self.num
                self.num = 0
                self.start += 2
                
        return -1
