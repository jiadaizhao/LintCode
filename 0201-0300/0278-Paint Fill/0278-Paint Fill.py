class Solution:
    """
    @param screen: a two-dimensional array of colors
    @param x: the abscissa of the specified point
    @param y: the ordinate of the specified point
    @param newColor: the specified color
    @return: Can it be filled
    """
    def paintFill(self, screen, x, y, newColor):
        # write your code here.
        if screen[x][y] == newColor:
            return False

        def dfs(row, col, oldColor, newColor):
            if row < 0 or row >= len(screen) or col < 0 or col >= len(screen[0]):
                return

            if screen[row][col] == oldColor:
                screen[row][col] = newColor
                dfs(row - 1, col, oldColor, newColor)
                dfs(row + 1, col, oldColor, newColor)
                dfs(row, col - 1, oldColor, newColor)
                dfs(row, col + 1, oldColor, newColor)

        dfs(x, y, screen[x][y], newColor)
        return True
