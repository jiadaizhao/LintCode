class Solution {
public:
    /**
     * @param nums: an array
     * @return: the longest length of set S
     */
    int arrayNesting(vector<int> &nums) {
        // Write your code here
        int maxLen = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != -1) {
                int len = 0;
                while (nums[i] != -1) {
                    int temp = i;                    
                    i = nums[i];
                    nums[temp] = -1;
                    ++len;
                }
                maxLen = max(maxLen, len);
            }
        }
        
        return maxLen;
    }
};
