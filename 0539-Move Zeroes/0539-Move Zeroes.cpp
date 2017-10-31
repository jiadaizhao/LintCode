class Solution {
public:
    /**
     * @param nums an integer array
     * @return nothing, do this in-place
     */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        int i = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j]) {
                swap(nums[i++], nums[j]);
            }
        }
    }
};
