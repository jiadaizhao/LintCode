class Solution {
public:
    /**
     * @param source a source string
     * @param target a target string
     * @return an integer as index
     */
    int strStr2(const char* source, const char* target) {
        // Write your code here
        if (!source || !target) {
            return -1;
        }
        
        int n = 0;
        for (const char *p = source; *p; ++p) {
            ++n;
        }
        int m = 0;
        for (const char *p = target; *p; ++p) {
            ++m;
        }
        
        if (m == 0) {
            return 0;
        }
        
        vector<int> lps(m);
        preprocess(target, lps);
        
        int i = 0, j = 0;
        while (i < n) {
            if (target[j] == source[i]) {
                ++i;
                ++j;
            }
            
            if (j == m) {
                return i - m;
            }
            else if (i < n && target[j] != source[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                }
                else {
                    ++i;
                }
            }
        }
        
        return -1;
        
    }

private:
    void preprocess(const char* target, vector<int>& lps) {
        lps[0] = 0;
        int m = lps.size();
        int i = 1;
        int len = 0;
        while (i < m) {
            if (target[i] == target[len]) {
                ++len;
                lps[i++] = len;
            }
            else if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i++] = 0;
            }
        }
    }
};
