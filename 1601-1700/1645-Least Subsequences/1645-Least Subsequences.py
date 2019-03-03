import bisect
class Solution:
    """
    @param arrayIn: The original array.
    @return: Count the minimum number of subarrays.
    """
    def LeastSubsequences(self, arrayIn):
        # Write your code here.
        tail = []
        for num in arrayIn:
            index = bisect.bisect_right(tail, num)
            if index == len(tail):
                tail.append(num)
            else:
                tail[index] = num
        return len(tail)
