class Solution {
public:
    /**
     * @param n: The folding times
     * @return: the 01 string
     */
    string getString(int n) {
        // Write your code here
        string result = "0";
        while (n-- > 1) {
            string temp = "0";
            for (int i = 0; i < result.size(); ++i) {
                temp += result[i];
                temp += '0' + (1 - (i & 1));
            }
            result = temp;
        }
        return result;
    }
};
