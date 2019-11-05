import collections
class Solution:
    """
    @param board: a board
    @param click: the position
    @return: the new board
    """
    def updateBoard(self, board, click):
        # Write your code here
        b = []
        for s in board:
            temp = []
            for c in s:
                temp.append(c)
            b.append(temp)
        row, col = click
        if b[row][col] == 'M':
            b[row][col] = 'X'
        else:
            m, n = len(board), len(board[0])
            Q = collections.deque([(row, col)])
            b[row][col] = 'B'
            while Q:
                r, c = Q.popleft()
                count = 0
                for nr, nc in (r-1, c-1), (r-1, c), (r-1, c+1), (r, c-1), (r, c+1), (r+1, c-1), (r+1, c), (r+1, c+1):
                    if 0 <= nr < m and 0 <= nc < n and b[nr][nc] == 'M':
                        count += 1
                        
                if count > 0:
                    b[r][c] = str(count)
                else:
                    for nr, nc in (r-1, c-1), (r-1, c), (r-1, c+1), (r, c-1), (r, c+1), (r+1, c-1), (r+1, c), (r+1, c+1):
                        if 0 <= nr < m and 0 <= nc < n and b[nr][nc] == 'E':
                            Q.append((nr, nc))
                            b[nr][nc] = 'B'
                        
        return [''.join(row) for row in b]
