class Solution:
    """
    @param color: the given color
    @return: a 7 character color that is most similar to the given color
    """
    def similarRGB(self, color):
        # Write your code here
        def similar(comp):
            q, r = divmod(int(comp, 16), 17)
            if r > 8:
                q += 1
            return '{:02x}'.format(q * 17)
        return '#' + similar(color[1:3]) + similar(color[3:5]) + similar(color[5:])