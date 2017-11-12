class Solution {
public:
    /**
     * @param nums an array with positive and negative numbers
     * @param k an integer
     * @return the maximum average
     */
    double maxAverage(vector<int>& nums, int k) {
        // Write your code here
        int minNum = INT_MAX, maxNum = INT_MIN;
        for (int num : nums) {
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
        }
        
        double start = minNum, end = maxNum;
        while (end - start > 1e-5) {
            double mid = (start + end) / 2;
            if (available(nums, mid, k)) {
                start = mid;
            }
            else {
                end = mid;
            }
        }
        
        return start;
    }
private:
    bool available(vector<int>& nums, double candidate, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i] - candidate;
        }
        if (sum >= 0) {
            return true;
        }
        
        double presum = 0;
        double premin = 0;
        for (int i = k; i < nums.size(); ++i) {
            sum += nums[i] - candidate;
            presum += nums[i - k] - candidate;
            premin = min(premin, presum);
            if (sum - premin >= 0) {
                return true;
            }
        }
        
        return false;
    }
};
