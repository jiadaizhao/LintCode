class Solution {
public:
    /**
     * @param s a string,  encoded message
     * @return an integer, the number of ways decoding
     */
    int numDecodings(string& s) {
        // Write your code here
        int n = s.size();
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return s == "0" ? 0 : 1;
        }
        
        int dp0 = 1;
        int dp1 = (s[0] == '0') ? 0 : 1;
        int dp2 = 0;
        for (int i = 2; i <= n; ++i) {
            dp2 = 0;
            if (s[i - 1] != '0') {
                dp2 = dp1;
            }
            
            if (i >= 2 && 
                (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] >= '0' && s[i - 1] <= '6'))) {
                dp2 += dp0;
            }
            
            dp0 = dp1;
            dp1 = dp2;
        }
        
        return dp2;
    }
};
