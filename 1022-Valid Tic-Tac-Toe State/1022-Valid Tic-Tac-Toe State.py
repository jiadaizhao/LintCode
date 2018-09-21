class Solution:
    """
    @param board: the given board
    @return: True if and only if it is possible to reach this board position during the course of a valid tic-tac-toe game
    """
    def validTicTacToe(self, board):
        # Write your code
        first, second = 'XO'
        countX = sum(row.count(first) for row in board)
        countO = sum(row.count(second) for row in board)
        def win(player):
            for i in range(3):
                if all(board[i][j] == player for j in range(3)):
                    return True
                if all(board[j][i] == player for j in range(3)):
                    return True
            return (player == board[1][1] == board[0][0] == board[2][2] or
                    player == board[1][1] == board[0][2] == board[2][0])
                    
        if countO > countX or countX - countO > 1:
            return False
            
        if win(first) and countX != countO + 1:
            return False
        if win(second) and countX != countO:
            return False
        return True
