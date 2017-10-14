class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums) {
        // write your code here
        int i = 0;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (nums[j] % 2)
            {
                swap(nums[i++], nums[j]);
            }
        }
    }
};
