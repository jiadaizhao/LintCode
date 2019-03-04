class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        unordered_map<int, int> table;
        vector<int> result(2);
        int sum = 0;
        table[0] = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            if (table.find(sum) != table.end())
            {
                result[0] = table[sum] + 1;
                result[1] = i;
                break;
            }
            else
            {
                table[sum] = i;
            }
        }
        
        return result;
    }
};
