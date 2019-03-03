class Cell {
public:
    int row, col, val;
    Cell(int r, int c, int v): row(r), col(c), val(v){};
    bool operator < (const Cell& C) const {
        return val > C.val;
    }
};

class Solution {
public:
    /**
     * @param arrays k sorted integer arrays
     * @return a sorted array
     */
    vector<int> mergekSortedArrays(vector<vector<int>>& arrays) {
        // Write your code here
        vector<int> result;
        int m = arrays.size();
        if (m == 0)
        {
            return result;
        }
        int n = arrays[0].size();
        if (n == 0)
        {
            return result;
        }
        priority_queue<Cell> pq;
        for (int i = 0; i < m; ++i)
        {
            pq.emplace(Cell(i, 0, arrays[i][0]));
        }
        
        while (!pq.empty())
        {
            Cell C = pq.top();
            result.push_back(C.val);
            pq.pop();
            if (C.col < arrays[C.row].size() - 1)
            {
                pq.emplace(C.row, C.col + 1, arrays[C.row][C.col + 1]);
            }
        }
        
        return result;
    }
};
