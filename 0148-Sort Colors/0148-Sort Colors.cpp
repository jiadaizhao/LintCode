class Solution {
public:
    /*
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */
    void sortColors(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return;
        }
        
        int i = 0, k = n - 1;
        int j = 0;
        while (j <= k) {
            if (nums[j] == 0) {
                swap(nums[i++], nums[j++]);
            }
            else if (nums[j] == 2) {
                swap(nums[k--], nums[j]);
            }
            else {
                ++j;
            }
        }
    }
};
