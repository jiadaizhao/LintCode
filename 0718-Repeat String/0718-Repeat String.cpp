class Solution {
public:
    /*
     * @param : string A to be repeated
     * @param : string B
     * @return: the minimum number of times A has to be repeated
     */
    int repeatedString(string &A, string &B) {
        // write your code here
        int n = A.size();
        if (n == 0) {
            return -1;
        }
        int m = B.size();
        vector<int> lps(m);
        int i = 1;
        int len = 0;
        while (i < m) {
            if (B[i] == B[len]) {
                lps[i++] = ++len;
            }
            else if (len != 0) {
                len = lps[len - 1];
            }
            else {
                ++i;
            }
        }
        
        i = 0;
        int j = 0;
        while (i < n) {
            if (A[(i + j) % n] == B[j]) {
                ++j;
                if (j == m) {
                    return (i + j) / n + ((i + j) % n != 0 ? 1 : 0);
                }
            }
            else if (j != 0) {
                i += j - lps[j - 1];
                j = lps[j - 1];
            }
            else {
                ++i;
            }
        }
        
        return -1;
    }
};
