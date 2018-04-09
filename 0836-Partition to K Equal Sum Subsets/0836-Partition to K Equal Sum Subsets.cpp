class Solution {
public:
    /**
     * @param nums: a list of integer
     * @param k: an integer
     * @return: return a boolean, denote whether the array can be divided into k non-empty subsets whose sums are all equal
     */
    bool partitiontoEqualSumSubsets(vector<int> &nums, int k) {
        // write your code here
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % k) {
            return false;
        }
        int target = sum / k;
        vector<bool> dp(1 << n);
        dp[0] = true;
        vector<int> sums(1 << n);
        for (int i = 0; i < dp.size(); ++i) {
            if (!dp[i]) {
                continue;
            }
            for (int j = 0; j < n; ++j) {
                int next = i | (1 << j);
                if (next != i && !dp[next]) {
                    if (nums[j] <= target - sums[i] % target) {
                        dp[next] = true;
                        sums[next] = sums[i] + nums[j];
                    }
                    else {
                        break;
                    }
                }
            }
        }
        return dp.back();
    }
};
