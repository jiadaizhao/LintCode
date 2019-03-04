class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        
        int i = 0;
        bool duplicate = false;
        for (int j = 1; j < n; ++j)
        {
            if (nums[i] != nums[j])
            {
                duplicate = false;
                swap(nums[++i], nums[j]);
            }
            else if (!duplicate)
            {
                duplicate = true;
                swap(nums[++i], nums[j]);
            }
        }
        
        return i + 1;
    }
};
