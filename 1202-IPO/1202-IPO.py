import heapq
class Solution:
    """
    @param k: an integer
    @param W: an integer
    @param Profits: an array
    @param Capital: an array
    @return: final maximized capital
    """
    def findMaximizedCapital(self, k, W, Profits, Capital):
        # Write your code here
        cappq = [(cap, i) for i, cap in enumerate(Capital)]
        heapq.heapify(cappq)
        profitpq = []
        for _ in range(k):
            while cappq and cappq[0][0] <= W:
                cap, index = heapq.heappop(cappq)
                heapq.heappush(profitpq, -Profits[index])
                
            if profitpq:
                W -= heapq.heappop(profitpq)
            else:
                break
        return W
