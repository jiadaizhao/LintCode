class Solution {
public:
    /*
     * @param nums: A list of integers
     * @param k: An integer
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums, int k) {
        // write your code here
        int n = nums.size();
        unordered_map<int, int> table;
        for (int num : nums)
        {
            if (table.find(num) != table.end() || table.size() < k)
            {
                ++table[num];
            }
            else
            {
                for (auto it = table.begin(); it != table.end();)
                {
                    if (--it->second == 0)
                    {
                        it = table.erase(it);
                    }
                    else
                    {
                        ++it;
                    }
                }
            }
        }
        
        int maxCount = 0;
        int result = 0;
        for (auto it = table.begin(); it != table.end(); ++it)
        {
            if (it->second > maxCount)
            {
                result = it->first;
                maxCount = it->second;
            }
        }
        
        return result;
    }
};
