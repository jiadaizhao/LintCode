class Solution {
public:
    /*
     * @param nums: A list of integers
     * @param k: An integer
     * @return: The median of the element inside the window at each moving
     */
    vector<int> medianSlidingWindow(vector<int> &nums, int k) {
        // write your code here
        vector<int> result;
        if (nums.size() == 0) {
            return result;
        }
        multiset<int> table(nums.begin(), nums.begin() + k);
        auto mid = next(table.begin(), (k - 1) / 2);
        result.push_back(*mid);
        for (int i = k; i < nums.size(); ++i) {
            table.insert(nums[i]);
            if (nums[i] < *mid) {
                --mid;
            }
            
            if (nums[i - k] <= *mid) {
                ++mid;
            }
            
            table.erase(table.lower_bound(nums[i - k]));
            result.push_back(*mid);
        }
        return result;
    }
};
