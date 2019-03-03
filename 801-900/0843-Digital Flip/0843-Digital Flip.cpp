class Solution {
public:
    /**
     * @param nums: the array
     * @return: the minimum times to flip digit
     */
    int flipDigit(vector<int> &nums) {
        // Write your code here
        int total1 = 0;
        for (int num : nums) {
            if (num == 1) {
                ++total1;
            }
        }
        
        int flip = total1, count1 = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                ++count1;
            }
            flip = min(flip, i + 1 - count1 + total1 - count1);
        }
        return flip;
    }
};
