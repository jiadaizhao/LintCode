class Solution {
public:
    /**
     * @param words: a list of unique words
     * @return: all pairs of distinct indices
     */
    vector<vector<int>> palindromePairs(vector<string> &words) {
        // Write your code here
        unordered_map<string, int> table;
        for (int i = 0; i < words.size(); ++i) {
            string rev(words[i]);
            reverse(rev.begin(), rev.end());
            table[rev] = i;
        }
        
        vector<vector<int>> result;
        for (int i = 0; i < words.size(); ++i) {
            for (int l = 1; l <= words[i].size(); ++l) {
                string left = words[i].substr(0, l);
                string right = words[i].substr(l);
                if (isPalindrome(left) && table.count(right) && table[right] != i) {
                    result.push_back({table[right], i});
                }
                if (isPalindrome(right) && table.count(left) && table[left] != i) {
                    result.push_back({i, table[left]});
                }
            }
        }
        
        if (table.count("")) {
            int j = table[""];
            for (int i = 0; i < words.size(); ++i) {
                if (words[i] != "" && isPalindrome(words[i])) {
                    result.push_back({i, j});
                }
            }
        }
        
        return result;
    }
    
private:
    bool isPalindrome(string s) {
        if (s.size() == 0) {
            return true;
        }
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};
