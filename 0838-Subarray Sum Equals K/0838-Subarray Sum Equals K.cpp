class Solution {
public:
    /**
     * @param nums: a list of integer
     * @param k: an integer
     * @return: return an integer, denote the number of continuous subarrays whose sum equals to k
     */
    int subarraySumEqualsK(vector<int> &nums, int k) {
        // write your code here
        int n = nums.size(), sum = 0, count = 0;
        unordered_map<int, int> table;
        table[0] = 1;
        for (int num : nums) {
            sum += num;
            count += table[sum - k];
            ++table[sum];
        }
        
        return count;
    }
};
