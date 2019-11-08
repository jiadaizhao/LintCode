class Solution:
    """
    @param grids: a matrix of integer
    @return: return a boarder sort matrix
    """
    def BoarderSort(self, grids):
        # write your code here
        n = len(grids)
        rowStart = colStart = 0
        rowEnd = colEnd = n - 1
        while rowStart <= rowEnd and colStart <= colEnd:
            indices = []
            temp = []
            for j in range(colStart, colEnd + 1):
                indices.append([rowStart, j])
                temp.append(grids[rowStart][j])
            rowStart += 1
            for i in range(rowStart, rowEnd + 1):
                indices.append([i, colEnd])
                temp.append(grids[i][colEnd])
            colEnd -= 1
            if rowStart <= rowEnd:
                for j in range(colEnd, colStart - 1, -1):
                    indices.append([rowEnd, j])
                    temp.append(grids[rowEnd][j])
                rowEnd -= 1
                
            if colStart <= colEnd:
                for i in range(rowEnd, rowStart - 1, -1):
                    indices.append([i, colStart])
                    temp.append(grids[i][colStart])
                colStart += 1
            
            for (i, j), val in zip(indices, sorted(temp)):
                grids[i][j] = val
                
        return grids
