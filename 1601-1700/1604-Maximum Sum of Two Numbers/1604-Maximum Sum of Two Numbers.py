import collections
class Solution:
    """
    @param A: An Integer array
    @return: returns the maximum sum of two numbers
    """
    def MaximumSum(self, A):
        # write your code here
        table = collections.defaultdict(list)
        for a in A:
            num = a
            s = 0
            while num:
                s += num % 10
                num //= 10
            table[s].append(a)       
            
        maxSum = -1
        for val in table.values():
            if len(val) > 1:
                maxSum = max(maxSum, sum(sorted(val)[-2:]))
                
        return maxSum
