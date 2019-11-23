import collections
class Solution:
    def ShortestBridge(self, A):
        Q = collections.deque()
        def dfs(r, c):
            Q.append((r, c))
            A[r][c] = 2
            for nr, nc in (r-1, c), (r+1, c), (r, c-1), (r, c+1):
                if 0 <= nr < len(A) and 0 <= nc < len(A[0]) and A[nr][nc] == 1:
                    dfs(nr, nc)
        
        found = False            
        for r in range(len(A)):
            for c in range(len(A[0])):
                if A[r][c] == 1:
                    dfs(r, c)
                    found = True
                    break
                
            if found:
                break
            
        minNum = 0
        while Q:
            for _ in range(len(Q)):
                r, c = Q.popleft()
                for nr, nc in (r-1, c), (r+1, c), (r, c-1), (r, c+1):
                    if 0 <= nr < len(A) and 0 <= nc < len(A[0]):
                        if A[nr][nc] == 1:
                            return minNum
                        elif A[nr][nc] == 0:
                            Q.append((nr, nc))
                            A[nr][nc] == 2
            minNum += 1
        
        return -1
