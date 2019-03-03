class UF {
public:
    UF(int n) {
        parent = vector<int>(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
        rank = vector<int>(n);
        sz = vector<int>(n, 1);
    }
    
    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }
    
    void Union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP == rootQ) return;
        
        // make root of smaller rank point to root of larger rank
        if (rank[rootP] < rank[rootQ]) {
            parent[rootP] = rootQ;
            sz[rootQ] += sz[rootP]; 
        }
        else if (rank[rootP] > rank[rootQ]) {
            parent[rootQ] = rootP;
            sz[rootP] += sz[rootQ];
        }
        else {
            parent[rootQ] = rootP;
            sz[rootP] += sz[rootQ];
            rank[rootP]++;
        }
    }
    
    int top() {
        return sz[find(sz.size() - 1)] - 1;
    }
private:
    vector<int> parent, rank, sz;
};

class Solution {
public:
    /**
     * @param grid: a grid
     * @param hits: some erasures order
     * @return: an array representing the number of bricks that will drop after each erasure in sequence
     */
    vector<int> hitBricks(vector<vector<int>> &grid, vector<vector<int>> &hits) {
        // Write your code here
        vector<int> result(hits.size());
        vector<vector<int>> gc = grid;
        for (auto hit : hits) {
            gc[hit[0]][hit[1]] = 0;
        }
        
        int m = grid.size(), n = grid[0].size();
        UF uf(m * n + 1);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (gc[i][j] == 1) {
                    int index = i * n + j;
                    if (i == 0) {
                        uf.Union(index, m * n);
                    }
                    if (i > 0 && gc[i - 1][j] == 1) {
                        uf.Union(index, (i - 1) * n + j);
                    }
                    if (j > 0 && gc[i][j - 1] == 1) {
                        uf.Union(index, i * n + j - 1);
                    }
                }
            }
        }
        
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        for (int t = hits.size() - 1; t >= 0; --t) {
            int r = hits[t][0];
            int c = hits[t][1];
            if (grid[r][c] == 1) {
                int prevTop = uf.top();
                int index = r * n + c;
                if (r == 0)
                    uf.Union(index, m * n);
                for (int k = 0; k < 4; ++k) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && gc[nr][nc] == 1)
                        uf.Union(index, nr * n + nc);
                }                
                gc[r][c] = 1;
                result[t] = max(0, uf.top() - prevTop - 1);
            }
        }
        
        return result;
    }
};
