class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here
        vector<vector<int>> result;
        if (nums.size() < 3)
        {
            return result;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            if (nums[i] > 0)
            {
                break;
            }
            
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            
            int start = i + 1, end = nums.size() - 1;
            while (start < end)
            {
                if (nums[start] + nums[end] < -nums[i])
                {
                    ++start;
                }
                else if (nums[start] + nums[end] > -nums[i])
                {
                    --end;
                }
                else
                {
                    vector<int> path(3);
                    path[0] = nums[i];
                    path[1] = nums[start];
                    path[2] = nums[end];
                    result.push_back(path);
                    
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
        
        return result;
    }
};
