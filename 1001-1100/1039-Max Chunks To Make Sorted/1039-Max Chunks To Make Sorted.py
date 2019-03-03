class Solution:
    """
    @param arr: a permutation of N
    @return: the most number of chunks
    """
    def maxChunksToSorted(self, arr):
        # write your code here
        maxNum = count = 0
        for i, a in enumerate(arr):
            maxNum = max(maxNum, a)
            if (maxNum == i):
                count += 1
        return count
