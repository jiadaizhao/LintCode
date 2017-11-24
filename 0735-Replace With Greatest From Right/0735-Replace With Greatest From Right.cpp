class Solution {
public:
    /*
     * @param : An array of integers.
     * @return: nothing
     */
    void arrayReplaceWithGreatestFromRight(vector<int> &nums) {
        // Write your code here.
        if (nums.size() == 0) {
            return;
        }
        
        int maxNum = nums.back();
        nums.back() = -1;
        for (int i = nums.size() - 2; i >= 0; --i) {
            int temp = nums[i];
            nums[i] = maxNum; 
            maxNum = max(maxNum, temp);
        }
    }
};
