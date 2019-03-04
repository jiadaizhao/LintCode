class Solution {
public:
    /*
     * @param heights: a vector of integers
     * @return: an integer
     */
    int maxArea(vector<int> &heights) {
        // write your code here
        int maxA = 0;
        int n = heights.size();
        int start = 0, end = n - 1;
        while (start < end) {
            if (heights[start] <= heights[end]) {
                maxA = max(maxA, heights[start] * (end - start));
                ++start;
            }
            else {
                maxA = max(maxA, heights[end] * (end - start));
                --end;
            }
        }
        
        return maxA;
    }
};
