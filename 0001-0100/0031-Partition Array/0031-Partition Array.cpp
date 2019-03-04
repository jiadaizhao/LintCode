class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i = 0;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (nums[j] < k)
            {
                swap(nums[i++], nums[j]);
            }
        }
        
        return i;
    }
};
