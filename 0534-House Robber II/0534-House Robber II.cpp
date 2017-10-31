class Solution {
public:
    /**
     * @param nums: An array of non-negative integers.
     * return: The maximum amount of money you can rob tonight
     */
    int houseRobber2(vector<int>& nums) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return nums[0];
        }
        
        return max(helper(nums, 0, n - 2), helper(nums, 1, n - 1));
    }
    
private:
    int helper(vector<int>& nums, int start, int end) {
        int dp0 = 0, dp1 = 0;
        for (int i = start; i <= end; ++i) {
            int dp2 = max(dp1, dp0 + nums[i]);
            dp0 = dp1;
            dp1 = dp2;
        }
        return dp1;
    }
};
