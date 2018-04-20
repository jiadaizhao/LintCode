class Solution {
public:
    /**
     * @param s: a string
     * @return: return a string
     */
    string removeDuplicateLetters(string &s) {
        // write your code here
        vector<int> last(26);
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            last[s[i] - 'a'] = i;
        }
        
        string result;
        vector<bool> visited(26);
        for (int i = 0; i < n; ++i) {
            if (visited[s[i] - 'a']) {
                continue;
            }
            while (result.size() && s[i] < result.back() && last[result.back() - 'a'] > i) {
                visited[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            visited[s[i] - 'a'] = true;
            result += s[i];
        }
        return result;
    }
};
