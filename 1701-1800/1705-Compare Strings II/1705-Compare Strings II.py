class Solution:
    """
    @param A: a string
    @param B: a string
    @return: returns an array C of N integers
    """
    def compareStringii(self, A, B):
        # write your code here
        freqCounts = [0] * 11
        for a in A.split(','):
            freq = a.count(min(a))
            freqCounts[freq] += 1
            
        for i in range(1, 11):
            freqCounts[i] += freqCounts[i - 1]
        
        result = []
        for b in B.split(','):
            freq = b.count(min(b))
            result.append(freqCounts[freq - 1])
            
        return result
