class Solution:
    """
    @param arr: a integer array
    @return: return ids sum is minimum.
    """
    def UniqueIDSum(self, arr):
        # write your code here
        table = set()
        for a in arr:
            while a in table:
                a += 1
            table.add(a)
            
        return sum(table)
