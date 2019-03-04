class Solution {
public:
    /*
     * @param : the given array
     * @param : the window size
     * @return: the sum of the count of unique elements in each window
     */
    int slidingWindowUniqueElementsSum(vector<int> nums, int k) {
        // write your code here
        unordered_map<int, int> table;
        int n = nums.size();
        for (int i = 0; i < k && i < n; ++i) {
            ++table[nums[i]];
        }
        
        int unique = 0;
        for (auto t : table) {
            if (t.second == 1) {
                ++unique;
            }
        }
        
        int sum = unique;
        for (int i = k; i < n; ++i) {
            if (nums[i] != nums[i - k]) {
                --table[nums[i - k]];
                if (table[nums[i - k]] == 1) {
                    ++unique;
                }
                else if (table[nums[i - k]] == 0) {
                    --unique;
                }
                
                ++table[nums[i]];
                if (table[nums[i]] == 1) {
                    ++unique;
                }
                else if (table[nums[i]] == 2) {
                    --unique;
                }
            }
            sum += unique;
        }
        
        return sum;
    }
};
