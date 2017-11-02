class Solution {
public:
    /*
     * @param s: an expression includes numbers, letters and brackets
     * @return: a string
     */
    string expressionExpand(string &s) {
        // write your code here
        int i = 0;
        return helper(s, i);
    }
    
private:
    string helper(string &s, int &i) {
        string result;
        while (i < s.size() && s[i] != ']') {
            if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && s[i] != '[') {
                    num = num * 10 + (s[i++] - '0');
                }
                
                ++i; // '['
                string temp = helper(s, i);
                ++i; // ']'
                
                while (num--) {
                    result += temp;
                }
            } else {
                result += s[i++];
            }
        }
        return result;
    }
};
