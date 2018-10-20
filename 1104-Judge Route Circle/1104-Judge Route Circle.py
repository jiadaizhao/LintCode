class Solution:
    """
    @param moves: a sequence of its moves
    @return: if this robot makes a circle
    """
    def judgeCircle(self, moves):
        # Write your code here
        x = y = 0
        for m in moves:
            if m == 'R':
                x += 1
            elif m == 'L':
                x -= 1
            elif m == 'U':
                y -= 1
            else:
                y += 1
        return x == 0 and y == 0
