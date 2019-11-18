class Solution:
    """
    @param n: Length of the array
    @param num: num array
    @param cost: cost array
    @return: nothing
    """
    def strangeSort(self, n, num, cost):
        return list(zip(*sorted(zip(num, cost), key=lambda x: x[1])))[0]
