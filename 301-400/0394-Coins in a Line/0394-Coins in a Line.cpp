class Solution {
public:
    /**
     * @param n: an integer
     * @return: a boolean which equals to true if the first player will win
     */
     bool firstWillWin(int n) {
        // write your code here
        if (n == 0)
        {
            return false;
        }
        else if (n == 1)
        {
            return true;
        }

        bool dp0 = false;
        bool dp1 = true;
        bool dp2 = true;
        for (int i = 2; i <= n; ++i)
        {
            dp2 = !dp0 || !dp1;
            dp0 = dp1;
            dp1 = dp2;
        }
        
        return dp2;
    }
};

class Solution {
public:
    /**
     * @param n: an integer
     * @return: a boolean which equals to true if the first player will win
     */
     bool firstWillWin(int n) {
        // write your code here
        return n % 3;
    }
};
