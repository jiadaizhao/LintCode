import heapq
class Solution:
    """
    @param nums1: List[int]
    @param nums2: List[int]
    @param k: an integer
    @return: return List[List[int]]
    """
    def kSmallestPairs(self, nums1, nums2, k):
        # write your code here
        if not nums1 or not nums2 or k <= 0:
            return []
            
        pq = [(nums1[0] + nums2[0], 0, 0)]
        result = []
        while pq and k > 0:
            val, col1, col2 = heapq.heappop(pq)
            result.append([nums1[col1], nums2[col2]])
            if col1 + 1 < len(nums1):
                heapq.heappush(pq, (nums1[col1 + 1] + nums2[col2], col1 + 1, col2))
            
            if col1 == 0 and col2 + 1 < len(nums2):
                heapq.heappush(pq, (nums1[col1] + nums2[col2 + 1], col1, col2 + 1))
                
            k -= 1
        return result
