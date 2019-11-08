class Solution:
    """
    @param grids: a maxtrix with alphabet
    @return: return sorted lists
    """
    def CounterDiagonalSort(self, grids):
        # write your code here
        m = len(grids)
        n = len(grids[0])
        table = []
        for i in range(m):
            temp = []
            row = i
            col = 0
            while row >= 0 and col < n:
                temp.append(grids[row][col])
                row -= 1
                col += 1
            table.append(temp)
            
        for i in range(m, m + n - 1):
            temp = []
            row = m - 1
            col = i - m + 1
            while row >= 0 and col < n:
                temp.append(grids[row][col])
                row -= 1
                col += 1
            table.append(temp)
        
        l = min(m, n)
        result = []
        for t in table:
            temp = []
            i = 0
            while len(temp) < l:
                temp.append(t[i % len(t)])
                i += 1
            result.append(temp)
            
        return sorted(result)
