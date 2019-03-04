class Solution {
public:
    /**
     * @param nums: The number array
     * @return: Return the single number
     */
    int getSingleNumber(vector<int> &nums) {
        // Write your code here
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = (start + end) / 2;
            if (nums[mid] == nums[mid + 1]) {
                if (mid & 1) {
                    end = mid - 1;
                }
                else {
                    start = mid + 2;
                }
            }
            else if (nums[mid] == nums[mid - 1]) {
                if (mid & 1) {
                    start = mid + 1;
                }
                else {
                    end = mid - 2;
                }
            }
            else {
                return nums[mid];
            }
        }
        
        return nums[start];
    }
};
