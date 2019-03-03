class Solution {
public:
    /**
     * @param heights: a vector of integers
     * @return: a integer
     */
    int trapRainWater(vector<int> &heights) {
        // write your code here
        if (heights.size() == 0)
        {
            return 0;
        }
        
        int sum = 0;
        int left = 0;
        int right = heights.size() - 1;
        int maxLeft = 0, maxRight = 0;
        while (left <= right)
        {
            if (heights[left] <= heights[right])
            {
                if (heights[left] < maxLeft)
                {
                    sum += maxLeft - heights[left];
                }
                else
                {
                    maxLeft = heights[left];
                }
                ++left;
            }
            else
            {
                if (heights[right] < maxRight)
                {
                    sum += maxRight - heights[right];
                }
                else
                {
                    maxRight = heights[right];
                }
                --right;
            }
        }
        
        return sum;
    }
};
