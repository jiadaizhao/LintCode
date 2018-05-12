class Solution {
public:
    /**
     * @param nums: the arrays
     * @param k: the distance of the same number
     * @return: the ans of this question
     */
    string sameNumber(vector<int> &nums, int k) {
        // Write your code here
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); ++i) {
            if (table.count(nums[i]) && i - table[nums[i]] < k) {
                return "YES";
            }
            table[nums[i]] = i;
        }
        return "NO";
    }
};
