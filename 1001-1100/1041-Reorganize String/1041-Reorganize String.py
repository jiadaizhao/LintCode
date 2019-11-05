import collections
import heapq
class Solution:
    """
    @param S: a string
    @return: return a string
    """
    def reorganizeString(self, S):
        # write your code here
        pq = [(-v, k) for k, v in collections.Counter(S).items()]
        heapq.heapify(pq)
        result = []
        prevCount = -1
        prevChar = ' '
        while pq:
            count, c = heapq.heappop(pq)
            result.append(c)
            count = -count
            if prevCount > 0:
                heapq.heappush(pq, (-prevCount, prevChar))
            prevCount = count - 1
            prevChar = c
            
        return ''.join(result) if len(result) == len(S) else ''
