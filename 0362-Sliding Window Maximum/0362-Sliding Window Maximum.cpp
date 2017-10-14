class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: The maximum number inside the window at each moving.
     */
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        // write your code here
        deque<int> dq;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            while (!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front();
            }
            
            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            if (i >= k - 1)
            {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};
