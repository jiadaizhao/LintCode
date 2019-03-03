class Solution {
public:
    /**
     * @param s a string
     * @param p a non-empty string
     * @return a list of index
     */
    vector<int> findAnagrams(string& s, string& p) {
        // Write your code here
        vector<int> result;
        int n = s.size();
        int m = p.size();
        if (n < m) {
            return result;
        }
        
        vector<int> table(26);
        for (char c : p) {
            ++table[c - 'a'];    
        }
        
        int start = 0;
        int count = p.size();
        for (int end = 0; end < n; ++end) {
            if (--table[s[end] - 'a'] >= 0) {
                --count;
            }
            
            if (end - start + 1 == p.size()) {
                if (count == 0) {
                    result.push_back(start);
                }
                if (++table[s[start] - 'a'] > 0) {
                    ++count;
                }
                ++start;
            }
        }
        
        return result;
    }
};
