class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int backPack(int m, vector<int> A) {
        // write your code here
        int n = A.size();
        vector<bool> dp(1 + m);
        dp[0] = true;

        for (int i = 0; i < n; ++i)
        {
            for (int j = m; j >= A[i]; --j)
            {
                if (dp[j - A[i]])
                {
                    dp[j] = true;
                }
            }
        }
        
        for (int i = m; i >= 1; --i)
        {
            if (dp[i])
            {
                return i;
            }
        }
        
        return 0;
    }
};
