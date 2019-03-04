class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySumClosest(vector<int> nums){
        // write your code here
        vector<int> result(2);
        vector<pair<int, int>> table;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            if (sum == 0)
            {
                result[1] = i;
                return result;
            }
            else
            {
                table.push_back({sum, i});
            }
        }
        
        sort(table.begin(), table.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < table.size(); ++i)
        {
            int diff = table[i].first - table[i - 1].first;
            if (diff < minDiff)
            {
                minDiff = diff;
                result[0] = min(table[i - 1].second, table[i].second) + 1;
                result[1] = max(table[i - 1].second, table[i].second);
            }
        }
        
        return result;
    }
};
