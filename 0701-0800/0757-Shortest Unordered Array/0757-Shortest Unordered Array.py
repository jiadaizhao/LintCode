class Solution:
    """
    @param arr: an array of integers
    @return: the length of the shortest possible subsequence of integers that are unordered
    """
    def shortestUnorderedArray(self, arr):
        # write your code here
        inc = dec = True
        for i in range(len(arr) - 1):
            if arr[i] > arr[i + 1]:
                inc = False
                break
            
        for i in range(len(arr) - 1):
            if arr[i] < arr[i + 1]:
                dec = False
                break
            
        return 0 if inc or dec else 3
