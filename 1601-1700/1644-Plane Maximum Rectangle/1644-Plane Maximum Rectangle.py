class Solution:
    """
    @param a: the points
    @return: return the maximum rectangle area
    """
    def getMaximum(self, a):
        # write your code here
        table = set(map(tuple, a))
        maxArea = 0
        for j, p2 in enumerate(a):
            for i in range(j):
                p1 = a[i]
                if p1[0] == p2[0] or p1[1] == p2[1]:
                    continue
                if (p1[0], p2[1]) in table and (p2[0], p1[1]) in table:
                    maxArea = max(maxArea, abs((p2[0] - p1[0])*(p2[1] - p1[1])))
        return maxArea
