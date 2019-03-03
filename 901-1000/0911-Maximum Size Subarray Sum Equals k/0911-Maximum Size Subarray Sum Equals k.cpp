class Solution {
public:
    /**
     * @param nums: an array
     * @param k: a target value
     * @return: the maximum length of a subarray that sums to k
     */
    int maxSubArrayLen(vector<int> &nums, int k) {
        // Write your code here
        int maxLen = 0, sum = 0;
        unordered_map<int, int> table;
        table[0] = -1;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (table.count(sum - k)) {
                maxLen = max(maxLen, i - table[sum - k]);
            }
            
            if (!table.count(sum)) {
                table[sum] = i;
            }
        }
        return maxLen;
    }
};
