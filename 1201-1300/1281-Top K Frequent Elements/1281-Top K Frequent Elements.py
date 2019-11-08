import collections
import heapq
class Solution:
    """
    @param nums: the given array
    @param k: the given k
    @return: the k most frequent elements
    """
    def topKFrequent(self, nums, k):
        # Write your code here
        table = collections.Counter(nums)
        return heapq.nlargest(k, table.keys(), key=table.get)
