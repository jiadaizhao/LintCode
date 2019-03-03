class Solution {
public:
    /**
     * @param A an array of Integer
     * @return  an integer
     */
    int longestIncreasingContinuousSubsequence(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0)
        {
            return 0;
        }
        int maxLen = 1;
        int inclen = 1, declen = 1;
        for (int i = 1; i < n; ++i)
        {
            if (A[i] > A[i - 1])
            {
                ++inclen;
                declen = 1;
            }
            else if (A[i] < A[i - 1])
            {
                ++declen;
                inclen = 1;
            }
            else
            {
                inclen = 1;
                declen = 1;
            }
            maxLen = max(maxLen, max(inclen, declen));
        }

        return maxLen;
    }
};
