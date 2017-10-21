class Solution {
public:
    /**
     * @param costs n x k cost matrix
     * @return an integer, the minimum cost to paint all houses
     */
    int minCostII(vector<vector<int>>& costs) {
        // Write your code here
        int m = costs.size();
        if (m == 0)
        {
            return 0;
        }
        int k = costs[0].size();
        int prevMinCostIndex1 = -1, prevMinCostIndex2 = -1;
        int currMinCostIndex1 = -1, currMinCostIndex2 = -1;

        for (int i = 0; i < m; ++i)
        {
            currMinCostIndex1 = currMinCostIndex2 = -1;
            for (int j = 0; j < k; ++j)
            {
                if (i > 0)
                {
                    if (j == prevMinCostIndex1)
                    {
                        costs[i][j] += costs[i - 1][prevMinCostIndex2];
                    }
                    else
                    {
                        costs[i][j] += costs[i - 1][prevMinCostIndex1];
                    }
                }
                
                if (currMinCostIndex1 == -1)
                {
                    currMinCostIndex1 = j;
                }
                else if (costs[i][j] < costs[i][currMinCostIndex1])
                {
                    currMinCostIndex2 = currMinCostIndex1;
                    currMinCostIndex1 = j;
                }
                else if (currMinCostIndex2 == -1 || costs[i][j] < costs[i][currMinCostIndex2])
                {
                    currMinCostIndex2 = j;
                }
            }
            
            prevMinCostIndex1 = currMinCostIndex1;
            prevMinCostIndex2 = currMinCostIndex2;
        }
        
        return costs[m - 1][currMinCostIndex1];
    }
};
