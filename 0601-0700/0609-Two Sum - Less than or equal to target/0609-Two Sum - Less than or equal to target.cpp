class Solution {
public:
    /**
     * @param nums an array of integer
     * @param target an integer
     * @return an integer
     */
    int twoSum5(vector<int> &nums, int target) {
        // Write your code here
        if (nums.size() == 0) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 0;
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            if (nums[start] + nums[end] <= target) {
                count += end - start;
                ++start;
            }
            else {
                --end;
            }
        }
        
        return count;
    }
};
