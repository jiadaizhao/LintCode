class Solution {
public:
    /**
     * @param nums:  an array of n integers
     * @param target: a target
     * @return: the number of index triplets satisfy the condition nums[i] + nums[j] + nums[k] < target
     */
    int threeSumSmaller(vector<int> &nums, int target) {
        // Write your code here
        int n = nums.size();
        if (n < 2) return 0;
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < n - 2; ++i) {
            int start = i + 1, end = n - 1;
            while (start < end) {
                if (nums[i] + nums[start] + nums[end] >= target) {
                    --end;
                }
                else {
                    count += end - start;
                    ++start;
                }
            }
        }
        return count;
    }
};
