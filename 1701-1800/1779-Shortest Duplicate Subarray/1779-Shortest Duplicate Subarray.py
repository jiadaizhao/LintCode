class Solution:
    """
    @param arr: The array you should find shortest subarray length which has duplicate elements.
    @return: Return the shortest subarray length which has duplicate elements.
    """
    def getLength(self, arr):
        # Write your code here.
        minLen = len(arr) + 1
        table = {}
        for i, a in enumerate(arr):
            if a in table:
                minLen = min(minLen, i - table[a] + 1)
            table[a] = i
        return minLen if minLen <= len(arr) else -1
