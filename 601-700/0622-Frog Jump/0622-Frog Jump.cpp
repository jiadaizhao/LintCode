class Solution {
public:
    /**
     * @param stones a list of stones' positions in sorted ascending order
     * @return true if the frog is able to cross the river or false
     */
    bool canCross(vector<int>& stones) {
        // Write your code here
        unordered_map<int, unordered_set<int>> dp;
        
        dp[0].insert(0);
        
        for (int s : stones) {
            for (int step : dp[s]) {
                if (step > 1) {
                    dp[s + step - 1].insert(step - 1);
                }
                dp[s + step].insert(step);
                dp[s + step + 1].insert(step + 1);
            }
        }
        
        return dp[stones.back()].size() > 0;
    }
};
