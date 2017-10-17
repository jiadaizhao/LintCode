class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @param s: an integer
     * @return: an integer representing the minimum size of subarray
     */
    int minimumSize(vector<int> &nums, int s) {
        // write your code here
        int n = nums.size();
        int minSize = n + 1;
        int j = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            while (j < n && sum < s)
            {
                sum += nums[j++];
            }
            
            if (sum >= s)
            {
                minSize = min(minSize, j - i);
            }
            
            sum -= nums[i];
        }
        
        if (minSize == n + 1)
        {
            return -1;
        }
        else
        {
            return minSize;
        }
    }
};
