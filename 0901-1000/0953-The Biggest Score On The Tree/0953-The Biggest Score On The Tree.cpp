class Solution {
public:
    /**
     * @param x: The vertex of edge
     * @param y: The another vertex of edge
     * @param cost: The cost of edge
     * @param profit: The profit of vertex
     * @return: Return the max score
     */
    int getMaxScore(vector<int> &x, vector<int> &y, vector<int> &cost, vector<int> &profit) {
        // Write your code here
        int n = profit.size();
        vector<vector<pair<int, int>>> graph(n);
        for (int i = 0; i < x.size(); ++i) {
            graph[x[i]].push_back({y[i], cost[i]});
            graph[y[i]].push_back({x[i], cost[i]});
        }
        int maxTotal = INT_MIN;
        dfs(0, -1, graph, profit, 0, maxTotal);
        return maxTotal;
    }
    
private:
    void dfs(int curr, int prev, vector<vector<pair<int, int>>>& graph, vector<int>& profit, int total, int& maxTotal) {
        total += profit[curr];
        bool leaf = true;
        for (auto next : graph[curr]) {
            if (next.first != prev) {
                leaf = false;
                dfs(next.first, curr, graph, profit, total - next.second, maxTotal);
            }
        }
        if (leaf) {
            maxTotal = max(total, maxTotal);
        }
    }
};
