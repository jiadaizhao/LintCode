class Solution {
public:
    /**
     * @param board: the given board
     * @return:  the least number of moves required so that the state of the board is solved
     */
    int slidingPuzzle(vector<vector<int>> &board) {
        // write your code here
        unordered_set<string> visited;
        string curr = convert(board);
        visited.insert(curr);
        queue<vector<vector<int>>> Q;
        Q.push(board);
        int step = -1;
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        while (!Q.empty()) {
            ++step;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i) {
                auto b = Q.front();
                Q.pop();
                
                if (match(b)) return step;
                int r, c;
                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 3; ++j)
                        if (b[i][j] == 0) {
                            r = i;
                            c = j;
                            break;
                        }
                for (int k = 0; k < 4; ++k) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];
                    if (nr >= 0 && nr < 2 && nc >= 0 && nc < 3) {
                        swap(b[r][c], b[nr][nc]);
                        string s = convert(b);
                        if (!visited.count(s)) {
                            Q.push(b);
                            visited.insert(s);
                        }
                        swap(b[r][c], b[nr][nc]);
                    }
                }                
            }
        }
        return -1;
    }
    
private:
    string convert(vector<vector<int>>& board) {
        string str;
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 3; ++j)
                str += '0' + board[i][j];
        return str;
    }
    
    bool match(vector<vector<int>>& board) {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 3; ++j)
                if (board[i][j] != (i * 3 + j + 1) % 6)
                    return false;
        return true;
    }
};