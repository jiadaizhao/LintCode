class Solution {
public:
    /**    
     * @param nums: a vector of integers
     * @return: an integer
     */
    int findMissing(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            while (nums[i] != i && nums[i] != n)
            {
                swap(nums[i], nums[nums[i]]);
            }
        }
        
        int i = 0;
        while (i < n && nums[i] == i)
        {
            ++i;
        }
        
        return i;
    }
};
