import collections
import heapq
class Solution:
    """
    @param grid: 
    @return: The lowest number of moves to acquire all keys
    """
    def shortestPathAllKeys(self, grid):
        # write your code here
        m = len(grid)
        n = len(grid[0])
        def neighbor(r, c):
            for nr, nc in (r-1, c), (r+1, c), (r, c-1), (r, c+1):
                if 0 <= nr < m and 0 <= nc < n:
                    yield nr, nc
                    
        def bfs(source, row, col):
            visited = [[False] * n for _ in range(m)]
            visited[row][col] = True
            Q = collections.deque([(row, col, 0)])
            dist = {}
            while Q:
                r, c, d = Q.popleft()
                if grid[r][c] != source and grid[r][c] != '.':
                    dist[grid[r][c]] = d
                    continue
                    
                for nr, nc in neighbor(r, c):
                    if grid[nr][nc] != '#' and not visited[nr][nc]:
                        Q.append((nr, nc, d + 1))
                        visited[nr][nc] = True
            return dist
        
        numKey = 0
        dists = collections.defaultdict(dict)
        for i in range(m):
            for j in range(n):
                if grid[i][j] not in '.#':
                    if grid[i][j].islower():
                        numKey += 1
                    dists[grid[i][j]] = bfs(grid[i][j], i, j)
        
        target = 2 ** numKey - 1
        pq = [(0, '@', 0)]
        final_dist = {}
        while pq:
            d, place, state = heapq.heappop(pq)
            if (place, state) in final_dist:
                continue
            if state == target:
                return d
            final_dist[(place, state)] = d
            for destination, d2 in dists[place].items():
                state2 = state
                if destination.islower():
                    state2 |= (1 << (ord(destination) - ord('a')))
                elif destination.isupper():
                    if not (state & (1 << (ord(destination) - ord('A')))):
                        continue
                
                if (destination, state2) not in final_dist:
                    heapq.heappush(pq, (d + d2, destination, state2))
        return -1
