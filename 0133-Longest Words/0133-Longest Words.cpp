class Solution {
public:
    /*
     * @param dictionary: an array of strings
     * @return: an arraylist of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> result;
        int maxLen = 0;
        for (string& s : dictionary) {
            if (s.size() > maxLen) {
                maxLen = s.size();
                result.clear();
                result.push_back(s);
            }
            else if (s.size() == maxLen) {
                result.push_back(s);
            }
        }
        return result;
    }
};
