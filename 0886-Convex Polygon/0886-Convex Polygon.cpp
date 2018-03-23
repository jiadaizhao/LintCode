class Solution {
public:
    /**
     * @param nums: a list of integer
     * @return: return a integer, denote  the maximum number of consecutive 1s
     */
    int findMaxConsecutiveOnes(vector<int> &nums) {
        // write your code here
        int flip = 0, maxNum = 0, start = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                ++flip;
            }

            while (flip > 1) {
                if (nums[start] == 0) {
                    --flip;
                }
                ++start;
            }
            maxNum = max(maxNum, i - start + 1);
        }
        return maxNum;
    }
};
