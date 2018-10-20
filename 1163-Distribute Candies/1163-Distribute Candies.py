class Solution:
    """
    @param candies: a list of integers
    @return: return a integer
    """
    def distributeCandies(self, candies):
        # write your code here
        return min(len(set(candies)), len(candies) // 2)
