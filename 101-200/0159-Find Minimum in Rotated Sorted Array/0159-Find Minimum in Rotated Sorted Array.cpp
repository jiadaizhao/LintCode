class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums) {
        // write your code here
        int start = 0, end = nums.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] <= nums[end])
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return min(nums[start], nums[end]);
    }
};
