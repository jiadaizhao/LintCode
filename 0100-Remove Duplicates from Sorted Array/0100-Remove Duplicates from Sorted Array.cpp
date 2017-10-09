class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if (nums.size() == 0)
        {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); ++j)
        {
            if (nums[j] != nums[i])
            {
                swap(nums[++i], nums[j]);
            }
        }
        
        return i + 1;
    }
};
