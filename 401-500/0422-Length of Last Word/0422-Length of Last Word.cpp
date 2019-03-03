class Solution {
public:
    /*
     * @param s: A string
     * @return: the length of last word
     */
    int lengthOfLastWord(string &s) {
        // write your code here
        int n = s.size();
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            --i;
        }
        
        if (i < 0) {
            return 0;
        }
        
        int len = 0;
        while (i >= 0 && s[i] != ' ') {
            --i;
            ++len;
        }
        return len;
    }
};
