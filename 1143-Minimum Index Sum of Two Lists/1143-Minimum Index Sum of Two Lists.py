class Solution:
    """
    @param list1: a list of strings
    @param list2: a list of strings
    @return: the common interest with the least list index sum
    """
    def findRestaurant(self, list1, list2):
        # Write your code here
        table = {r : i for i, r in enumerate(list1)}
        result = []
        minSum = len(list1) + len(list2)
        for j, r in enumerate(list2):
            if r in table:
                i = table[r]
                if i + j < minSum:
                    minSum = i + j
                    result = [r]
                elif i + j == minSum:
                    result.append(r)
        return result
