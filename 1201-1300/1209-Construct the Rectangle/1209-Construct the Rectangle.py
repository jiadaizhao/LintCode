class Solution:
    """
    @param area: web pageÃ¢ÂÂs area
    @return: the length L and the width W of the web page you designed in sequence
    """
    def constructRectangle(self, area):
        # Write your code here
        W = int(math.sqrt(area))
        while area % W:
            W -= 1
        return [area // W, W]
