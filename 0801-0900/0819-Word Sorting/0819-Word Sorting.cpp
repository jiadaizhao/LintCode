class Solution {
public:
    /**
     * @param alphabet: the new alphabet
     * @param words: the original string array
     * @return: the string array after sorting
     */
    vector<string> wordSort(string &alphabet, vector<string> &words) {
        // Write your code here
        vector<int> order(26);
        for (int i = 0; i < 26; ++i) {
            order[alphabet[i] - 'a'] = i;
        }
        
        auto cmp = [&order](string s1, string s2) {
            int i = 0, j = 0;
            while (i < s1.size() && j < s2.size()) {
                if (s1[i] != s2[j]) {
                    return order[s1[i] - 'a'] < order[s2[i] - 'a'];
                }
                ++i;
                ++j;
            }
            
            return i == s1.size();
        };
        sort(words.begin(), words.end(), cmp);
        return words;
    }
};
