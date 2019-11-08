class Solution:
    """
    @param board: the given board
    @return: nothing
    """
    def gameOfLife(self, board):
        # Write your code here
        for r in range(len(board)):
            for c in range(len(board[0])):
                count = 0
                for nr, nc in (r-1, c-1), (r-1, c), (r-1, c+1), (r, c-1), (r, c+1), (r+1, c-1), (r+1, c), (r+1, c+1):
                    if 0 <= nr < len(board) and 0 <= nc < len(board[0]) and (board[nr][nc] & 1):
                        count += 1
                        
                if board[r][c] & 1:
                    if count == 2 or count == 3:
                        board[r][c] |= 2
                elif count == 3:
                    board[r][c] |= 2
                    
        for r in range(len(board)):
            for c in range(len(board[0])):
                board[r][c] >>= 1
