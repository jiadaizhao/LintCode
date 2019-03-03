class Solution:
    """
    @param funds: The investment each time
    @param a: The initial funds of A
    @param b: The initial funds of B
    @param c: The initial funds of C
    @return: The final funds
    """
    def getAns(self, funds, a, b, c):
        # Write your code here
        result = [a, b, c]
        for f in funds:
            index = 0
            for i in range(1, 3):
                if result[i] < result[index]:
                    index = i
            result[index] += f
        return result

import heapq
class Solution2:
    """
    @param funds: The investment each time
    @param a: The initial funds of A
    @param b: The initial funds of B
    @param c: The initial funds of C
    @return: The final funds
    """
    def getAns(self, funds, a, b, c):
        # Write your code here
        pq = []
        heapq.heappush(pq, (a, 0))
        heapq.heappush(pq, (b, 1))
        heapq.heappush(pq, (c, 2))
        result = [a, b, c]
        for f in funds:
            fund, index = heapq.heappop(pq)
            result[index] += f
            heapq.heappush(pq, (fund + f, index))
        return result
