class Solution {
public:
    /**
     * @param nums a list of integer
     * @return void
     */  
    void wiggleSort(vector<int>& nums) {
        // Write your code here
        if (nums.size() == 0)
        {
            return;
        }

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if ((i % 2 == 0 && nums[i] > nums[i + 1]) ||
                (i % 2 == 1 && nums[i] < nums[i + 1]))
            {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};
