class Solution:
    """
    @param intervals: List[List[int]]
    @return: return an integer
    """
    def intersectionSizeTwo(self, intervals):
        # write your code here
        intervals.sort(key = lambda i: i[1])
        largest = second = -1
        count = 0
        for a, b in intervals:
            is_largest_in = a <= largest
            is_second_in = a <= second
            if is_largest_in and is_second_in:
                continue
            count += 1 if is_largest_in else 2
            second = largest if is_largest_in else b - 1
            largest = b
        return count
