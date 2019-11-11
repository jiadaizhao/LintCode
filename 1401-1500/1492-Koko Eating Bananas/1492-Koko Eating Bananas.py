class Solution:
    """
    @param piles: an array
    @param H: an integer
    @return: the minimum integer K
    """
    def minEatingSpeed(self, piles, H):
        # Write your code here
        low = 1
        high = max(piles)
        while low < high:
            mid = (low + high) // 2
            count = sum((p + mid - 1) // mid for p in piles)
            if count > H:
                low = mid + 1
            else:
                high = mid
                
        return low
