class Solution {
public:
    /**
     * @param nums: the num arrays 
     * @return: the num arrays after rearranging
     */
    vector<int> rearrange(vector<int> &nums) {
        // Write your code here 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> result(n);
        int j = 0;
        for (int i = 0; i < n; i += 2) {
            result[i] = nums[j++];
        }
        for (int i = 1; i < n; i += 2) {
            result[i] = nums[j++];
        }
        return result;
    }
};
