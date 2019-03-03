class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: an integer
     */
    int maxProduct(vector<int>& nums) {
        // write your code here
        vector<int> maxProduct(nums.size() + 1);
        vector<int> minProduct(nums.size() + 1);
        maxProduct[0] = 1;
        minProduct[0] = 1;
        
        int result = INT_MIN;
        for (int i = 1; i <= nums.size(); ++i)
        {
            if (nums[i - 1] <= 0)
            {
                maxProduct[i] = max(nums[i - 1], minProduct[i - 1] * nums[i - 1]);
                minProduct[i] = min(nums[i - 1], maxProduct[i - 1] * nums[i - 1]);
            }
            else
            {
                maxProduct[i] = max(nums[i - 1], maxProduct[i - 1] * nums[i - 1]);
                minProduct[i] = min(nums[i - 1], minProduct[i - 1] * nums[i - 1]);
            }
            
            result = max(result, maxProduct[i]);
        }
        
        return result;
    }
};