class Solution {
public:
    /*
     * @param : a continuous stream of numbers
     * @param : a number
     * @return: returns the first unique number
     */
    int firstUniqueNumber(vector<int> nums, int number) {
        // Write your code here
        unordered_map<int, int> table;
        bool found = false;
        for (int i = 0; i < nums.size(); ++i) {
            ++table[nums[i]];
            if (nums[i] == number) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            return -1;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (table[nums[i]] == 1) {
                return nums[i];
            }
            if (nums[i] == number) {
                break;
            }
        }
        
        return -1;
    }
};
