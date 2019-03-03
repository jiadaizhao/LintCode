class Solution {
public:
    /**
     * @param nums an array of integers
     * @return the number of unique integers
     */
    int deduplication(vector<int>& nums) {
        // Write your code here
        if (nums.size() == 0)
        {
            return 0;
        }
        
        unordered_set<int> table;

        int count = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (table.count(nums[i]) == 0)
            {
                table.insert(nums[i]);
                nums[count++] = nums[i];
            }
        }
        
        return count;
    }
};
