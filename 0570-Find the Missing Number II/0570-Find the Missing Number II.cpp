class Solution {
public:
    /**
     * @param n an integer
     * @param str a string with number from 1-n in 
     *            random order and miss one number
     * @return an integer
     */
    int findMissing2(int n, string& str) {
        // Write your code here
        vector<bool> used(n);
        int missing = -1;
        dfs(str, 0, used, missing);
        return missing;
    }

private:
    bool dfs(string& str, int start, vector<bool>& used, int& missing)
    {
        if (start > str.size()) {
            return false;
        }
        
        if (start == str.size()) {
            for (int i = 0; i < used.size(); ++i) {
                if (!used[i]) {
                    missing = i + 1;
                    break;
                }
            }
            return true;
        }
        
        if (str[start] == '0') {
            return false;
        }
        
        for (int i = 1; i <= 2; ++i) {
            int num = stoi(str.substr(start, i));
            if (num > used.size() || used[num - 1]) {
                continue;
            }
            used[num - 1] = true;
            if (dfs(str, start + i, used, missing)) {
                return true;
            }
            used[num - 1] = false;
        }
        
        return false;
    }
};
