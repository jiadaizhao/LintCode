import heapq
class Solution:
    """
    @param A: the array of A
    @param B: the array of B
    @return: the most advantageous A array after rearrangement
    """
    def advantageCount(self, A, B):
        # write your code here.
        A.sort()
        pq = [(-b, i) for i, b in enumerate(B)]
        heapq.heapify(pq)
        result = [0] * len(A)
        low = 0
        high = len(A) - 1
        while pq:
            b, i = heapq.heappop(pq)
            b = -b
            if A[high] > b:
                result[i] = A[high]
                high -= 1
            else:
                result[i] = A[low]
                low += 1
                
        return result
