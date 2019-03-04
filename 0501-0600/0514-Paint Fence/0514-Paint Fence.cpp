class Solution {
public:
    /*
     * @param n: non-negative integer, n posts
     * @param k: non-negative integer, k colors
     * @return: an integer, the total number of ways
     */
    int numWays(int n, int k) {
        // write your code here
        if (n == 0) {
            return 0;
        }
        
        if (n == 1) {
            return k;
        }
        
        if (n == 2) {
            return k * k;
        }
        
        int dp1 = k, dp2 = k * k;
        int dp3 = 0;
        for (int i = 3; i <= n; ++i) {
            dp3 = (dp1 + dp2) * (k - 1);
            dp1 = dp2;
            dp2 = dp3;
        }
        
        return dp3;
    }
};

class Solution {
public:
    /*
     * @param n: non-negative integer, n posts
     * @param k: non-negative integer, k colors
     * @return: an integer, the total number of ways
     */
    int numWays(int n, int k) {
        // write your code here
        if (n == 0) {
            return 0;
        }
        
        if (n == 1) {
            return k;
        }
        
        int sameColor = k;
        int diffColor = k * (k - 1);
        for (int i = 3; i <= n; ++i) {
            int temp = diffColor;
            diffColor = (sameColor + diffColor) * (k - 1);
            sameColor = temp;
        }
        
        return sameColor + diffColor;
    }
};
