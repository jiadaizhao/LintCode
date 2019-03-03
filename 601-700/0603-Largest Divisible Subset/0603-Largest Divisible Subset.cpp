class Solution {
public:
    /*
     * @param nums: a set of distinct positive integers
     * @return: the largest subset 
     */
    vector<int> largestDivisibleSubset(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<int> dp(n);
        vector<int> parent(n);
        int maxLen = 0;
        int maxIndex = -1;
        for (int i = n - 1; i >= 0; --i) {
            for (int j = i; j < n; ++j) {
                if (nums[j] % nums[i] == 0 && 1 + dp[j] > dp[i]) {
                    dp[i] = 1 + dp[j];
                    parent[i] = j;
                    if (dp[i] > maxLen) {
                        maxLen = dp[i];
                        maxIndex = i;
                    }
                }
            }
        }

        vector<int> result(maxLen);
        int index = maxIndex;
        for (int i = 0; i < maxLen; ++i) {
            result[i] = nums[index];
            index = parent[index];
        }
        
        return result;
    }
};
