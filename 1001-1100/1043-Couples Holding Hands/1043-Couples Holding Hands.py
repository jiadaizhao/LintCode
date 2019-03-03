class Solution:
    """
    @param row: the couples' initial seating
    @return: the minimum number of swaps
    """
    def minSwapsCouples(self, row):
        # Write your code here
        count = 0
        table = {}
        for i, r in enumerate(row):
            table[r] = i
        for i in range(0, len(row), 2):
            couple = row[i] ^ 1
            if i + 1 == table[couple]:
                continue
            count += 1
            table[row[i + 1]] = table[couple]
            row[i + 1], row[table[couple]] = row[table[couple]], row[i + 1]
            table[couple] = i + 1
        return count
