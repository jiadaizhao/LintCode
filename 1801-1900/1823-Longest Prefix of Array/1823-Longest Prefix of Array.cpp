class Solution {
public:
    /**
     * @param X: a integer
     * @param Y: a integer
     * @param nums: a list of integer
     * @return: return the maximum index of largest prefix
     */
    int LongestPrefix(int X, int Y, vector<int> &nums) {
        // write your code here
        int maxIndex = -1, bal = 0;
        bool empty = true;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == X) {
                empty = false;
                ++bal;
            }
            else if (nums[i] == Y) {
                empty = false;
                --bal;
            }
            if (bal == 0 && !empty) {
                maxIndex = i;
            }
        }
        
        return maxIndex;
    }
};
