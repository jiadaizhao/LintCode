class Solution {
public:
    /**
     * @param nums: a binary array
     * @return: the maximum length of a contiguous subarray
     */
    int findMaxLength(vector<int> &nums) {
        // Write your code here
        unordered_map<int, int> table;
        table[0] = -1;
        int n = nums.size(), maxLen = 0, sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                ++sum;
            }
            else {
                --sum;
            }
            if (table.find(sum) != table.end()) {
                maxLen = max(maxLen, i - table[sum]);
            }
            else {
                table[sum] = i;
            }
        }
        
        return maxLen;
    }
};
