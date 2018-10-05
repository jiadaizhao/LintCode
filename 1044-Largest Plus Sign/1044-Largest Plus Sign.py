class Solution:
    """
    @param N: size of 2D grid
    @param mines: in the given list
    @return: the order of the plus sign
    """
    def orderOfLargestPlusSign(self, N, mines):
        # Write your code here
        grid = [[1] * N for _ in range(N)]
        for mine in mines:
            grid[mine[0]][mine[1]] = 0
        rowOnes = colStart = 0
        colOnes = [0] * N
        rowStart = [0] * N
        maxLen = 0
        for i in range(N):
            for j in range(N):
                if grid[i][j] == 0:
                    continue
                    
                if j == 0 or grid[i][j - 1] == 0:
                    rowOnes = 0
                    colStart = j
                    for k in range(j, N):
                        if grid[i][k] == 1:
                            rowOnes += 1
                        else:
                            break

                if i == 0 or grid[i - 1][j] == 0:
                    colOnes[j] = 0
                    rowStart[j] = i
                    for k in range(i, N):
                        if grid[k][j] == 1:
                            colOnes[j] += 1
                        else:
                            break
                            
                maxLen = max(maxLen, min([i - rowStart[j] + 1, j - colStart + 1, 
                              colOnes[j] - (i - rowStart[j]), rowOnes - (j - colStart)]))
        return maxLen
