class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        unordered_map<int, int> table;
        vector<int> result(2);
        for (int i = 0; i < nums.size(); ++i)
        {
            if (table.find(target - nums[i]) != table.end())
            {
                result[0] = table[target - nums[i]];
                result[1] = i + 1;
                break;
            }
            else
            {
                table[nums[i]] = i + 1;
            }
        }
        
        return result;
    }
};
