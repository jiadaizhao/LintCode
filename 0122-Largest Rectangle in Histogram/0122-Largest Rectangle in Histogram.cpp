class Solution {
public:
    /**
     * @param height: A list of integer
     * @return: The area of largest rectangle in the histogram
     */
    int largestRectangleArea(vector<int> &height) {
        // write your code here
        height.push_back(0);
        stack<int> St;
        int maxArea = 0;
        for (int i = 0; i < height.size(); ++i)
        {
            while (!St.empty() && height[St.top()] >= height[i])
            {
                int top = St.top();
                St.pop();
                int w = St.size() ? i - St.top() - 1: i;
                maxArea = max(maxArea, height[top] * w);
            }
            St.push(i);
        }
        
        height.pop_back();
        return maxArea;
    }
};
