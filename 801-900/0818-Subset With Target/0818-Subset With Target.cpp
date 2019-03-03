class Solution {
public:
    /**
     * @param nums: the array
     * @param target: the target
     * @return: the number of subsets which meet the following conditions
     */
    long long subsetWithTarget(vector<int> &nums, int target) {
        // Write you code here
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(), nums.end());
        int start = 0, end = n - 1;
        long long count = 0;
        while (start <= end) {
            int sum = nums[start] + nums[end];
            if (sum >= target) {
                --end;
            }
            else {
                count += 1LL << (end - start);
                ++start;
            }
        }

        return count;
    }
};
