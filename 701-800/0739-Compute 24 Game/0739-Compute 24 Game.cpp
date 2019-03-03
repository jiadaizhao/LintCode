class Solution {
public:
    /**
     * @param nums: 4 cards
     * @return: whether they could get the value of 24
     */
    bool compute24(vector<double> &nums) {
        // write your code here
        for (int i = 0; i < 4; ++i) {
            int curr = nums[i];
            int used = 1 << i;
            if (dfs(nums, used, curr, 24)) {
                return true;
            }
        }
        
        return false;
    }
    
private:
    bool dfs(vector<double> &nums, int& used, double curr, double target) {
        if (used == 15) {
            return abs(curr - target) < 0.001;
        }
        
        for (int i = 0; i < 4; ++i) {
            int mask = 1 << i;
            if ((used & mask) == 0) {
                used |= mask;
                if (dfs(nums, used, curr + nums[i], target) || dfs(nums, used, curr - nums[i], target) ||
                    dfs(nums, used, nums[i] - curr, target) || dfs(nums, used, curr * nums[i], target) ||
                    dfs(nums, used, curr / nums[i], target)) {
                    return true;
                }
                
                if (dfs(nums, used, nums[i], target - curr) || dfs(nums, used, nums[i], curr - target) ||
                    dfs(nums, used, nums[i], target + curr)) {
                    return true;
                }
                
                if (curr != 0 && (dfs(nums, used, nums[i], target / curr) ||
                                  dfs(nums, used, nums[i], target * curr))) {
                    return true;
                }
                
                if (target != 0 && curr != 0 && dfs(nums, used, nums[i], curr / target)) {
                    return true;
                }
                
                used &= ~mask;
            }
        }
        
        return false;
    }
};
