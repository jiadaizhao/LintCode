class Solution {
public:
    /*
     * @param nums an array of Integer
     * @param target an integer
     * @return [index1 + 1, index2 + 1] (index1 < index2)
     */
    vector<int> twoSum7(vector<int> &nums, int target) {
        // write your code here
        vector<int> result(2);
        unordered_map<int, int> table;
        if (target < 0) {
            target = -target;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (table.find(nums[i] + target) != table.end()) {
                result[0] = table[nums[i] + target];
                result[1] = i + 1;
                break;
            }
            else if (table.find(nums[i] - target) != table.end()) {
                result[0] = table[nums[i] - target];
                result[1] = i + 1;
                break;
            }
            else {
                table[nums[i]] = i + 1;
            }
        }
        
        return result;
     }
};
