class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
    bool canJump(vector<int> A) {
        // write you code here
        int n = A.size();
        
        int maxLen = 0;
        for (int i = 0; i < n && i <= maxLen; ++i)
        {
            if (A[i] + i > maxLen)
            {
                maxLen = A[i] + i;
            }
        }
        
        return maxLen >= n - 1;
    }
};
