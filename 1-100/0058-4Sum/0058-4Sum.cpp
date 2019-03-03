class Solution {
public:
    /**
     * @param numbers: Give an array numbersbers of n integer
     * @param target: you need to find four elements that's sum of target
     * @return: Find all unique quadruplets in the array which gives the sum of 
     *          zero.
     */
    vector<vector<int> > fourSum(vector<int> nums, int target) {
        // write your code here
        vector<vector<int>> result;
        if (nums.size() < 4)
        {
            return result;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 2; ++j)
            {
                if ((j != i + 1) && (nums[j] == nums[j - 1]))
                {
                    continue;
                }
                
                int start = j + 1, end = nums.size() - 1;
                while (start < end)
                {
                    int sum = nums[start] + nums[end];
                    int localTarget = target - nums[i] - nums[j];
                    if (sum < localTarget)
                    {
                        ++start;
                    }
                    else if (sum > localTarget)
                    {
                        --end;
                    }
                    else
                    {
                        result.push_back({nums[i], nums[j], nums[start], nums[end]});
                        ++start;
                        --end;
                        while (start < end && nums[start] == nums[start - 1])
                        {
                            ++start;
                        }
                        while (start < end && nums[end] == nums[end + 1])
                        {
                            --end;
                        }
                    }
                     
                }
            }
        }
        
        return result;
    }
};
