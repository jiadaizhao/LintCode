class Solution:
    """
    @param forest: a list of integers
    @return: return a integer
    """
    def cutOffTree(self, forest):
        # write your code here
        trees = sorted((v, r, c) for r, row in enumerate(forest)
                       for c, v in enumerate(row) if v > 1)
        self.count = 0
        startr = startc = 0
        m = len(forest)
        n = len(forest[0])
        def bfs(targetr, targetc):
            if startr == targetr and startc == targetc:
                return True
            visited = [[False] * n for _ in range(m)]
            Q = []
            Q.append((startr, startc, 1))
            visited[startr][startc] = True
            while Q:
                r, c, v = Q.pop(0)
                for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
                    if 0 <= nr < m and 0 <= nc < n:
                        if nr == targetr and nc == targetc:
                            self.count += v
                            return True
                        if not visited[nr][nc] and forest[nr][nc] != 0:
                            Q.append((nr, nc, v + 1))
                            visited[nr][nc] = True
            return False
        
        for v, r, c in trees:
            if not bfs(r, c):
                return -1
            startr = r
            startc = c
        return self.count
