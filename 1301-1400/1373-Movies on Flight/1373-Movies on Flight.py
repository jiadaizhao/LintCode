class Solution:
    """
    @param arr: An integer array
    @param k: An integer
    @return: return the pair of movies index with the longest total duration
    """
    def FlightDetails(self, arr, k):
        # write your code here
        movies = sorted((m, i) for i, m in enumerate(arr))
        start = 0
        end = len(movies) - 1
        result = [-1, -1]
        maxTotal = 0
        maxSingle = 0
        while start < end:
            curr = movies[start][0] + movies[end][0]
            if curr > k - 30:
                end -= 1
            else:
                i1 = movies[start][1]
                i2 = movies[end][1]
                maxLen = max(arr[i1], arr[i2])
                if curr > maxTotal or (curr == maxTotal and maxLen > maxSingle):
                    result = [min(i1, i2), max(i1, i2)]
                    maxTotal = curr
                    maxSingle = maxLen
                start += 1
                
        return result
