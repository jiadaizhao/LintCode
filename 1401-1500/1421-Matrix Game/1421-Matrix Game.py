class Solution:
    """
    @param grids: a integer matrix
    @return: return the difference between two people at last.
    """
    def MatrixGame(self, grids):
        # write your code here
        maxVal = []
        for col in zip(*grids):
            maxVal.append(max(col))
            
        maxVal.sort(reverse=True)
        return sum(maxVal[0::2]) - sum(maxVal[1::2])
