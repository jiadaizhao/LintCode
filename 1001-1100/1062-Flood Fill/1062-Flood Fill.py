class Solution:
    """
    @param image: a 2-D array
    @param sr: an integer
    @param sc: an integer
    @param newColor: an integer
    @return: the modified image
    """
    def floodFill(self, image, sr, sc, newColor):
        # Write your code here
        orig = image[sr][sc]
        if orig == newColor:
            return image
        m = len(image)
        n = len(image[0])
        def dfs(r, c):
            if orig == image[r][c]:
                image[r][c] = newColor
                if r > 0:
                    dfs(r - 1, c)
                if r < m - 1:
                    dfs(r + 1, c)
                if c > 0:
                    dfs(r, c - 1)
                if c < n - 1:
                    dfs(r, c + 1)
        dfs(sr, sc)
        return image
