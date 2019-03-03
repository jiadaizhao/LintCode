class Solution {
public:
    /*
     * @param : String
     * @return: String
     */
    string convertPalindrome(string str) {
        // Write your code here
        int n = str.size();
        string rev(str);
        reverse(rev.begin(), rev.end());
        string s = str + '*' + rev;
        int m = s.size();
        vector<int> lps(m);
        int i = 1, len = 0;
        while (i < m) {
            if (s[i] == s[len]) {
                lps[i++] = ++len;
            }
            else if (len != 0) {
                len = lps[len - 1];
            }
            else {
                ++i;
            }
        }
        
        return rev.substr(0, n - lps[m - 1]) + str;
    }
};
