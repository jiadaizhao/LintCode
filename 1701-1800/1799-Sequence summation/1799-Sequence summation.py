class Solution:
    """
    @param i: 
    @param j: 
    @param k: 
    @return: nothing
    """
    def equlSum(self, i, j, k):
        # Write your code here
        return (i + j)*(j - i + 1) // 2 + (j - 1 + k) * (j - k) // 2
