class Solution:
    """
    @param sx: x for starting point
    @param sy: y for starting point
    @param tx: x for target point 
    @param ty: y for target point
    @return: if a sequence of moves exists to transform the point (sx, sy) to (tx, ty)
    """
    def reachingPoints(self, sx, sy, tx, ty):
        # write your code here
        while tx >= sx and ty >= sy:
            if tx > ty:
                if ty == sy:
                    return (tx - sx) % ty == 0
                else:
                    tx %= ty
            else:
                if tx == sx:
                    return (ty - sy) % tx == 0
                else:
                    ty %= tx
        return False
