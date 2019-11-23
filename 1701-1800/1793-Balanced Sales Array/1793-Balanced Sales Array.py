class Solution:
    """
    @param sales: a integer array
    @return: return a Integer
    """
    def BalancedSalesArray(self, sales):
        # write your code here
        right = [0] * len(sales)
        for i in range(len(sales) - 2, -1, -1):
            right[i] = right[i + 1] + sales[i + 1]
            
        left = sales[0]
        for i in range(1, len(sales) - 1):
            if left == right[i]:
                return i
            left += sales[i]
                
        return -1
