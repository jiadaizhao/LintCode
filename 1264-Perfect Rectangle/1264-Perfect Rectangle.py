import math
class Solution:
    """
    @param rectangles: N axis-aligned rectangles
    @return: if they all together form an exact cover of a rectangular region
    """
    def isRectangleCover(self, rectangles):
        # write your code here
        area = 0
        x1 = y1 = math.inf
        x2 = y2 = -math.inf
        table = set()
        for rec in rectangles:
            x1 = min(x1, rec[0])
            y1 = min(y1, rec[1])
            x2 = max(x2, rec[2])
            y2 = max(y2, rec[3])
            area += (rec[2] - rec[0])*(rec[3] - rec[1])
            
            points = ((rec[0], rec[1]), (rec[0], rec[3]), (rec[2], rec[1]), (rec[2], rec[3]))
            points = (str(p1) + '_' + str(p2) for p1, p2 in points)
            for point in points:
                if point in table:
                    table.remove(point)
                else:
                    table.add(point)
        return (len(table) == 4 and
                str(x1) + '_' + str(y1) in table and
                str(x1) + '_' + str(y2) in table and 
                str(x2) + '_' + str(y1) in table and
                str(x2) + '_' + str(y2) in table and
                area == (x2 - x1)*(y2 - y1))
