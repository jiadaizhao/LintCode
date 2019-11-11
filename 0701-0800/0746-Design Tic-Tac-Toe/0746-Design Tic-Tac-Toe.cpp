class GameEndException  {
public:
    string what() {
		return "Game has been ended, cannot make any more moves";
	}
} gameEndException;

class AlreadyTakenException {
public:
	string what() {
		return "This place has been taken";
	}
} alreadyTakenException;


class TicTacToe {
public:
    /** Initialize your data structure here. */
    TicTacToe() {
        initialize();
    }
    
    void initialize() {
        rows = vector<int>(3);
        cols = vector<int>(3);
        diag = 0;
        antidiag = 0;
        gameEnd = false;
        player = 0;
        visited.clear();
    }
    bool move(int row, int col) {
        if (gameEnd) {
			throw gameEndException;
		}
		if (visited.count(row * 3 + col)) {
			throw alreadyTakenException;
		}
		visited.insert(row * 3 + col);
        int val = (player == 0) ? 1 : -1;
        int n = rows.size();
        rows[row] += val;
        cols[col] += val;
        if (row == col) {
            diag += val;
        }
        
        if (row + col == n - 1) {
            antidiag += val;
        }
        
        if (abs(rows[row]) == n || abs(cols[col]) == n || abs(diag) == n || abs(antidiag) == n) {
            gameEnd = true;
            return true;
        }
        else {
            if (visited.size() == n * n) {
                cout << "it's a draw" << endl;
            }
            player = 1 - player;
            return false;
        }
    }
    
private:
    vector<int> rows;
    vector<int> cols;
    int diag, antidiag;
    unordered_set<int> visited;
    bool gameEnd;
    int player;
};
