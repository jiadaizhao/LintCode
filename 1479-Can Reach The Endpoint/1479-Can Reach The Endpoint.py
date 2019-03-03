import collections
class Solution:
    """
    @param map: the map
    @return: can you reach the endpoint
    """
    def reachEndpoint(self, map):
        # Write your code here
        m = len(map)
        if m == 0:
            return False
        n = len(map[0])
        if n == 0:
            return False
        if map[0][0] == 9:
            return True
        Q = collections.deque([(0, 0)])
        map[0][0] = 0
        while Q:
            r, c = Q.popleft()
            for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
                if nr >= 0 and nr < m and nc >= 0 and nc < n:
                    if map[nr][nc] == 9:
                        return True
                    elif map[nr][nc] == 1:
                        Q.append((nr, nc))
                        map[nr][nc] = 0
        
        return False
