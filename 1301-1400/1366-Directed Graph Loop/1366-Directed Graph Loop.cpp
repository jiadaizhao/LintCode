class Solution {
public:
    /**
     * @param start: The start points set
     * @param end: The end points set
     * @return: Return if the graph is cyclic
     */
    bool isCyclicGraph(vector<int> &start, vector<int> &end) {
        // Write your code here
        int maxV = 0;
        for (int v : start) {
            maxV = max(maxV, v);
        }
        for (int v : end) {
            maxV = max(maxV, v);
        }
        vector<vector<int>> graph(1 + maxV, vector<int>());
        vector<int> degrees(1 + maxV);
        for (int i = 0; i < start.size(); ++i) {
            graph[start[i]].push_back(end[i]);
            ++degrees[end[i]];
        }
        
        queue<int> Q;
        for (int i = 1; i <= maxV; ++i) {
            if (degrees[i] == 0 && graph[i].size()) {
                Q.push(i);
            }
        }
        
        while (!Q.empty()) {
            int u = Q.front();
            Q.pop();
            for (int v : graph[u]) {
                if (--degrees[v] == 0) {
                    Q.push(v);
                }
            }
        }
        
        for (int d : degrees) {
            if (d != 0) {
                return true;
            }
        }
        return false;
    }
};
