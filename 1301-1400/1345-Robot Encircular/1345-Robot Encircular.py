class Solution:
    """
    @param instructions: A string
    @return: return if the path that robot never leaves the circle.
    """
    def isRobotBounded(self, instructions):
        # write your code here
        x = y = d = 0
        dx = [0, 1, 0, -1]
        dy = [1, 0, -1, 0]

        for c in instructions:
            if c == 'L':
                d = (d - 1) % 4
            elif c == 'R':
                d = (d + 1) % 4
            else:
                x += dx[d]
                y += dy[d]
            
        return (x == 0 and y == 0) or d != 0
