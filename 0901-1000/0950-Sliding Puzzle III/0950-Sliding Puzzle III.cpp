class Solution {
public:
    /**
     * @param matrix: The 3*3 matrix
     * @return: The answer
     */
    string  jigsawPuzzle(vector<vector<int>> &matrix) {
        // Write your code here
        int target = 123456780;
        int curr = 0, index = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                curr = curr * 10 + matrix[i][j];
                if (matrix[i][j] == 0) {
                    index = i * 3 + j;
                }
            }
        }
        if (curr == target) {
            return "YES";
        }
        queue<pair<int, int>> Q;
        unordered_set<int> visited;
        Q.emplace(curr, index);
        visited.insert(curr);
        int dr[4] = {0, -1, 1, 0};
        int dc[4] = {1, 0, 0, -1};
        while (!Q.empty()) {
            int state = Q.front().first;
            int pos = Q.front().second;
            Q.pop();
            vector<vector<int>> m(3, vector<int>(3));
            for (int i = 2; i >= 0; --i) {
                for (int j = 2; j >= 0; --j) {
                    m[i][j] = state % 10;
                    state /= 10;
                }
            }
            int row = pos / 3;
            int col = pos % 3;
            for (int k = 0; k < 4; ++k) {
                int nr = row + dr[k];
                int nc = col + dc[k];
                if (nr >= 0 && nr < 3 && nc >= 0 && nc < 3) {
                    swap(m[row][col], m[nr][nc]);
                    int next = 0;
                    for (int i = 0; i < 3; ++i) {
                        for (int j = 0; j < 3; ++j) {
                            next = next * 10 + m[i][j];
                        }
                    }
                    if (next == target) {
                        return "YES";
                    }
                    if (!visited.count(next)) {
                        Q.emplace(next, nr * 3 + nc);
                        visited.insert(next);
                    }
                    swap(m[row][col], m[nr][nc]);
                }
            }
        }
        return "NO";
    }
};
