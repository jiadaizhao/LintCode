class Solution {
public:
    /**
     * @param board: the given board
     * @return: the minimum number of moves to transform the board into a "chessboard"
     */
    int movesToChessboard(vector<vector<int>> &board) {
        // Write your code here
        int N = board.size(), rowSum = 0, colSum = 0, rowSwap = 0, colSwap = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (board[0][0] ^ board[i][0] ^ board[0][j] ^ board[i][j]) return -1;
        for (int i = 0; i < N; ++i) {
            rowSum += board[0][i];
            colSum += board[i][0];
            rowSwap += board[i][0] == i % 2;
            colSwap += board[0][i] == i % 2;
        }
        if (rowSum != N / 2 + N % 2 && rowSum != N / 2) return -1;
        if (colSum != N / 2 + N % 2 && colSum != N / 2) return -1;
        if (N % 2) {
            if (colSwap % 2) colSwap = N - colSwap;
            if (rowSwap % 2) rowSwap = N - rowSwap;
        }
        else {
            colSwap = min(N - colSwap, colSwap);
            rowSwap = min(N - rowSwap, rowSwap);
        }
        return (colSwap + rowSwap) / 2;
    }
};
