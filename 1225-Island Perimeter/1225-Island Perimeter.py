class Solution:
    """
    @param grid: a 2D array
    @return: the perimeter of the island
    """
    def islandPerimeter(self, grid):
        # Write your code here
        perimeter = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    perimeter += 4
                    if i > 0 and grid[i - 1][j] == 1:
                        perimeter -= 2
                    if j > 0 and grid[i][j - 1] == 1:
                        perimeter -= 2
        return perimeter
