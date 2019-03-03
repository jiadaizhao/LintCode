class Solution {
public:
    /**
     * @param costs n x 3 cost matrix
     * @return an integer, the minimum cost to paint all houses
     */
    int minCost(vector<vector<int>>& costs) {
        // Write your code here
        int m = costs.size();
        if (m == 0)
        {
            return 0;
        }
        for (int i = 1; i < m; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                int minC = INT_MAX;
                for (int k = 0; k < 3; ++k)
                {
                    if (j != k)
                    {
                        minC = min(minC, costs[i - 1][k]);
                    }
                }
                costs[i][j] += minC;
            }
        }
        
        return min(costs[m - 1][0], min(costs[m - 1][1], costs[m - 1][2]));
    }
};
