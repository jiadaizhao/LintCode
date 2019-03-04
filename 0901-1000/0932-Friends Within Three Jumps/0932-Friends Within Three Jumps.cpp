class Solution {
public:
    /**
     * @param a: The a tuple
     * @param b: The b tuple
     * @param c: the c tuple
     * @param d: the d tuple
     * @return: The answer
     */
    vector<int> withinThreeJumps(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d) {
        // Write your code here
        unordered_map<int, vector<int>> friendTable;
    	for (int i = 0; i < a.size(); ++i) {
    		friendTable[a[i]].push_back(b[i]);
    		friendTable[b[i]].push_back(a[i]);
    	}
    
    	vector<int> result(c.size());
    	for (int i = 0; i < c.size(); ++i) {
    		result[i] = bfs(c[i], d[i], friendTable);
    	}
    	return result;
    }
    
private:
    int bfs(int start, int end, unordered_map<int, vector<int>>& friendTable) {
    	queue<int> Q;
    	Q.push(start);
    	int step = 0;
    	while (!Q.empty() && step <= 3) {
    		++step;
    		int qs = Q.size();
    		for (int i = 0; i < qs; ++i) {
    			int curr = Q.front();
    			if (curr == end) return 1;
    			Q.pop();
    			for (int next : friendTable[curr]) {
    				Q.push(next);
    			}
    		}
    	}
    	return 0;
    }
};
