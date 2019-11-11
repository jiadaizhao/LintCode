class Solution:
    """
    @param commands: type: List[int]
    @param obstacles: type: List[List[int]]
    @return: Return the square of the maximum Euclidean distance
    """
    def robotSim(self, commands, obstacles):
        # write your code here
        dx = [0, 1, 0, -1]
        dy = [1, 0, -1, 0]
        maxDist = dir = x = y = 0
        obs = set(map(tuple, obstacles))
        for c in commands:
            if c == -2:
                dir = (dir - 1) % 4
            elif c == -1:
                dir = (dir + 1) % 4
            else:
                for _ in range(c):
                    nx = x + dx[dir]
                    ny = y + dy[dir]
                    if (nx, ny) not in obs:
                        x = nx
                        y = ny
                        maxDist = max(maxDist, x*x + y*y)
                    else:
                        break
                    
        return maxDist
