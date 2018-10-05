class Solution:
    """
    @param arr: an array of integers
    @return: number of chunks
    """
    def maxChunksToSorted(self, arr):
        # Write your code here
        maxLeft = [arr[0]] * len(arr)
        for i, a in enumerate(arr):
            maxLeft[i] = max(maxLeft[i - 1], a)
        minRight = arr[-1]
        count = 1
        for i in range(len(arr) - 2, -1, -1):
            minRight = min(minRight, arr[i + 1])
            if maxLeft[i] <= minRight:
                count += 1
        return count
