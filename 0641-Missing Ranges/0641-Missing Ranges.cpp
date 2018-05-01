class Solution {
public:
    /*
     * @param nums: a sorted integer array
     * @param lower: An integer
     * @param upper: An integer
     * @return: a list of its missing ranges
     */
    vector<string> findMissingRanges(vector<int> &nums, int lower, int upper) {
        // write your code here
        vector<string> result;
        long long prev = lower - 1LL;
        for (int num : nums) {
            if (prev + 2 == num) {
                result.push_back(to_string(prev + 1));
            }
            else if (prev + 2 < num) {
                result.push_back(to_string(prev + 1) + "->" + to_string(num - 1));
            }
            prev = num;
        }
        
        if (prev + 1 == upper) {
            result.push_back(to_string(prev + 1));
        }
        else if (prev + 1 < upper) {
            result.push_back(to_string(prev + 1) + "->" + to_string(upper));
        }
        
        return result;
    }
};
