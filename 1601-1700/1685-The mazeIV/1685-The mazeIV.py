import collections
class Solution:
    """
    @param maps: 
    @return: nothing
    """
    def theMazeIV(self, maps):
        time = 0
        for i in range(len(maps)):
            for j in range(len(maps[i])):
                if maps[i][j] == 'S':
                    start = (i, j)
                elif maps[i][j] == 'T':
                    end = (i, j)
                    
        Q = collections.deque([start])
        while Q:
            for _ in range(len(Q)):
                if Q[0] == end:
                    return time
                r, c = Q.popleft()
                for nr, nc in (r-1, c), (r+1, c), (r, c-1), (r, c+1):
                    if 0 <= nr < len(maps) and 0 <= nc < len(maps[0]) and maps[nr][nc] != '#':
                        Q.append((nr, nc))
                        maps[nr][nc] = '#'
                        
            time += 1
            
        return -1
