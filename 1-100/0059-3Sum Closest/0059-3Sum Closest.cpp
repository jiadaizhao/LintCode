class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {
        // write your code here
        sort(nums.begin(), nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int twoSum = target - nums[i];
            int start = i + 1, end = nums.size() -1;
            while (start < end)
            {
                int sum = nums[start] + nums[end];
                if (sum == twoSum)
                {
                    return target;
                }
                else if (sum < twoSum)
                {
                    ++start;
                    
                }
                else
                {
                    --end;
                }
                
                if (abs(twoSum - sum) < abs(closestSum - target))
                {
                    closestSum = sum + nums[i];
                }
            }
        }
        
        return closestSum;
    }
};
