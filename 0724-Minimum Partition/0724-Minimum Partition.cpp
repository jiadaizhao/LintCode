class Solution {
public:
    /*
     * @param : the given array
     * @return: the minimum difference between their sums 
     */
    int findMin(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        
        int target = sum / 2;
        int minDiff = INT_MAX;
        vector<bool> dp(1 + target);
        dp[0] = true;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = target; j >= nums[i]; --j) {
                if (dp[j - nums[i]]) {
                    dp[j] = true;
                    minDiff = min(minDiff, abs(sum - 2 * j));
                }
            }
        }
        return minDiff;
    }
};
