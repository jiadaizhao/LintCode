class Solution {
public:
    /*
     * @param nums: an integer array
     * @param low: An integer
     * @param high: An integer
     * @return: 
     */
    void partition2(vector<int> &nums, int low, int high) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return;
        }
        
        int i = 0, j = 0, k = n - 1;
        while (j <= k) {
            if (nums[j] < low) {
                swap(nums[j++], nums[i++]);
            }
            else if (nums[j] > high) {
                swap(nums[j], nums[k--]);
            }
            else {
                ++j;
            }
        }
    }
};
