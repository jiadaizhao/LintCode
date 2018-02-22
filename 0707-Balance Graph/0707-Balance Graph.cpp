class Solution {
public:
    /*
     * @param edges: a directed graph where each edge is represented by a tuple
     * @return: the number of edges
     */
    int balanceGraph(vector<vector<int>> &edges) {
        // Write your code here
        unordered_map<int, int> nodes;
        for (auto& edge : edges) {
            nodes[edge[0]] -= edge[2];
            nodes[edge[1]] += edge[2];
        }
        
        vector<int> left(nodes.size());
        int len = 0;
        for (auto& node : nodes) {
            if (node.second != 0) {
                left[len++] = node.second;
            }
        }
        
        if (len == 0) {
            return 0;
        }
        
        vector<int> dp(1 << len, INT_MAX / 2);
        for (int i = 1; i < dp.size(); ++i) {
            int sum = 0, count = 0;
            for (int j = 0; j < len; ++j) {
                if (1 << j & i) {
                    sum += left[j];
                    ++count;
                }
            }
            
            if (sum == 0) {
                dp[i] = count - 1;
                for (int j = 1; j < i; ++j) {
                    if (((i & j) == j) && dp[j] + dp[i - j] < dp[i]) {
                        dp[i] = dp[j] + dp[i - j];
                    }
                }
            }
        }
        
        return dp.back();
    }
};
