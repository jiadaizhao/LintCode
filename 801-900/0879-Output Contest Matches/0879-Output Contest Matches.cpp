class Solution {
public:
    /**
     * @param n: a integer, denote the number of teams
     * @return: a string
     */
    string findContestMatch(int n) {
        // write your code here
        int m = n / 2;
        vector<string> result(n);
        for (int i = 0; i < m; ++i) {
            result[i] = "(" + to_string(i + 1) + "," + to_string(n - i) + ")";
        }
        
        while (m > 1) {
            for (int i = 0; i < m / 2; ++i) {
                result[i] = "(" + result[i] + "," + result[m - 1 - i] + ")";
            }
            m >>= 1;
        }
        return result[0];
    }
};
