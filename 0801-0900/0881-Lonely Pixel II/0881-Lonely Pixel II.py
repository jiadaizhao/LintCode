import collections
class Solution:
    """
    @param picture: a 2D char array
    @param N: an integer
    @return: return a integer
    """
    def findBlackPixel(self, picture, N):
        # write your code here
        m = len(picture)
        n = len(picture[0])
        rowB = [0] * m
        colB = [0] * n
        colTable = collections.defaultdict(list)
        for i in range(m):
            for j in range(n):
                if picture[i][j] == 'B':
                    rowB[i] += 1
                    colB[j] += 1
                    colTable[j].append(i)

        count = 0
        for j in range(n):
            if colB[j] != N:
                continue

            i = colTable[j][0]
            if rowB[i] == N:
                if all(picture[row] == picture[i] for row in colTable[j][1:]):
                    count += len(colTable[j])

        return count
