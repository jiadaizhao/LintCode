class Solution {
public:
    /**
     * @param nums a list of integers.
     * @return the sum of the element inside the window at each moving
     */
    vector<int> winSum(vector<int> &nums, int k) {
        // write your code here
        vector<int> result;
        int n = nums.size();
        if (n == 0) {
            return result;
        }
        
        int sum = 0;
        for (int i = 0; i < k && i < n; ++i) {
            sum += nums[i];
        }
        
        result.push_back(sum);
        
        for (int i = k; i < n; ++i) {
            sum = sum - nums[i - k] + nums[i];
            result.push_back(sum);
        }
        
        return result;
    }
};
