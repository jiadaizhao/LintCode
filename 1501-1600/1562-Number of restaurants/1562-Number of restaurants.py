import heapq
class Solution:
    """
    @param restaurant: 
    @param n: 
    @return: nothing
    """
    def nearestRestaurant(self, restaurant, n):
        # Write your code here
        if len(restaurant) < n or n == 0:
            return []
        pq = []
        for x, y in restaurant:
            heapq.heappush(pq, -(x*x + y*y))
            if len(pq) > n:
                heapq.heappop(pq)
                
        m = -pq[0]
        result = []
        for x, y in restaurant:
            if x*x + y*y <= m:
                result.append([x, y])
            if len(result) == n:
                break
        return result
