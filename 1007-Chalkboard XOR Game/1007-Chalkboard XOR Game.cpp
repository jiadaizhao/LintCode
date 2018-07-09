class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: return a boolean
     */
    bool xorGame(vector<int> &nums) {
        // write your code here
        int x = 0;
        for (int num : nums) {
            x ^= num;
        }
        return x == 0 || (nums.size() & 1) == 0;
    }
};
