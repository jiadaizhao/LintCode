class Solution {
public:
    /*
     * @param nums: a non-empty array only positive integers
     * @return: true if can partition or false
     */
    bool canPartition(vector<int> &nums) {
        // write your code here
        if (nums.size() < 2) {
            return false;
        }
        
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        
        if (sum % 2) {
            return false;
        }
        
        sum /= 2;
        vector<bool> dp(1 + sum);
        dp[0] = true;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = sum; j >= nums[i]; --j) {
                if (dp[j - nums[i]]) {
                    dp[j] = true;
                }
            }
        }
        
        return dp[sum];
    }
};
