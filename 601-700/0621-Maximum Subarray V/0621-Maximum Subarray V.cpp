class Solution {
public:
    /**
     * @param nums an array of integers
     * @param k1 an integer
     * @param k2 an integer
     * @return the largest sum
     */
    int maxSubarray5(vector<int>& nums, int k1, int k2) {
        // Write your code here
        if (nums.size() < k1) {
            return 0;
        }
        
        deque<int> dq;
        vector<int> sum(1 + nums.size());
        int maxSum = INT_MIN;
        for (int i = 1; i <= nums.size(); ++i) {
            sum[i] = sum[i - 1] + nums[i - 1];
            while (!dq.empty() && dq.front() < i - k2) {
                dq.pop_front();
            }
            
            if (i >= k1) {
                while (!dq.empty() && sum[dq.back()] > sum[i - k1]) {
                    dq.pop_back();
                }
                dq.push_back(i - k1);
            }
            
            if (!dq.empty()) {
                maxSum = max(maxSum, sum[i] - sum[dq.front()]);
            }
        }
        
        return maxSum;
    }
};
