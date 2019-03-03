class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        string result;
        for (string& str : strs) {
            result += to_string(str.size()) + '@' + str;
        }
        return result;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        vector<string> result;
        int i = 0;
        while (i < str.size()) {
            int len = 0;
            while (i < str.size() && str[i] != '@') {
                len = len * 10 + (str[i] - '0');
                ++i;
            }
            
            ++i;
            result.push_back(str.substr(i, len));
            i += len;
        }

        return result;
    }
};
