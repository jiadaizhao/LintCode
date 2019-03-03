class Solution {
public:
    /*
     * @param nums: a list of n integers
     * @return: true if there is a 132 pattern or false
     */
    bool find132pattern(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        
        stack<int> St;
        int ak = INT_MIN;
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < ak) {
                return true;
            }
            while (!St.empty() && nums[i] > St.top()) {
                ak = St.top();
                St.pop();
            }
            St.push(nums[i]);
        }
        return false;
    }
};
