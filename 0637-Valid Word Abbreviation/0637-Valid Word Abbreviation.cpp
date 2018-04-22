class Solution {
public:
    /**
     * @param word: a non-empty string
     * @param abbr: an abbreviation
     * @return: true if string matches with the given abbr or false
     */
    bool validWordAbbreviation(string &word, string &abbr) {
        // write your code here
        int i = 0, j = 0, num = 0;
        while (i < word.size() && j < abbr.size()) {
            if (isdigit(abbr[j])) {
                num = num * 10 + (abbr[j] - '0');
                if (num == 0) {
                    return false;
                }
            }
            else {
                i += num;
                if (i >= word.size() || word[i] != abbr[j]) {
                    return false; 
                }
                num = 0;
                ++i;
            }
            ++j;
        }
        i += num;
        return i == word.size() && j == abbr.size();
    }
};
