class Solution {
public:
    /**
     * @param a: The A array
     * @param b: The B array
     * @param s: The S string
     * @return: The answer
     */
    string stringReplace(vector<string> &a, vector<string> &b, string &s) {
        // Write your code here
        int n = s.size();
        if (n == 0) {
            return s;
        }
        vector<vector<int>> table(n);
        for (int i = 0; i < a.size(); ++i) {
            int start = 0;
            while (start < n) {
                int index = s.find(a[i], start);
                if (index == -1) {
                    break;
                }
                table[index].push_back(i);
                start = index + 1;
            }
        }
        
        int start = 0;
        string result;
        while (start < n) {
            if (table[start].size()) {
                int index = -1, maxLen = 0;
                for (int i : table[start]) {
                    if (a[i].size() > maxLen) {
                        maxLen = a[i].size();
                        index = i;
                    }
                }
                result += b[index];
                start += a[index].size();
            }
            else {
                result += s[start++];
            }
        }
        return result;
    }
};
