class Solution {
public:
    /**
     * @param s: the given string
     * @return: all the palindromic permutations (without duplicates) of it
     */
    vector<string> generatePalindromes(string &s) {
        // write your code here
        vector<string> result;
        vector<int> table(128);
        for (char c : s) {
            ++table[c];
        }
        string seed, mid;
        int odd = 0;
        for (int i = 0; i < table.size(); ++i) {
            if (table[i] > 0) {
                if (table[i] & 1) {
                    if (++odd > 1) {
                        return result;
                    }
                    mid += i;
                }
                seed += string(table[i] / 2, i);
            }
        }
        
        vector<bool> used(seed.size());
        string path;
        dfs(seed, path, mid, used, result);
        return result;
    }
    
private:
    void dfs(string& seed, string& path, string mid, vector<bool>& used, vector<string>& result) {
        if (path.size() == seed.size()) {
            string rev(path);
            reverse(rev.begin(), rev.end());
            result.push_back(path + mid + rev);
            return;
        }
        
        for (int i = 0; i < seed.size(); ++i) {
            if (!used[i] && (i == 0 || seed[i] != seed[i - 1] || used[i - 1])) {
                used[i] = true;
                path.push_back(seed[i]);
                dfs(seed, path, mid, used, result);
                path.pop_back();
                used[i] = false;
            }
        }
    }
};
