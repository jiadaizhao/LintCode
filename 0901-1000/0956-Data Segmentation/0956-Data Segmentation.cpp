class Solution {
public:
    /**
     * @param str: The input string
     * @return: The answer
     */
    vector<string> dataSegmentation(string &str) {
        // Write your code here
        vector<string> result;
        int n = str.size(), i = 0;
        while (i < n) {
            if (isalpha(str[i])) {
                string temp;
                while (i < n && isalpha(str[i])) {
                    temp += str[i++];
                }
                result.push_back(temp);
            }
            else if (str[i] != ' '){
                result.push_back(string(1, str[i++]));
            }
            else {
                ++i;
            }
        }
        
        return result;
    }
};
