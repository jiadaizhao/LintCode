class Solution {
public:
    /*
     * @param n: the nth
     * @return: the nth sequence
     */
    string countAndSay(int n) {
        // write your code here
        string result = "1";
        for (int i = 1; i < n; ++i) {
            string temp;
            for (int j = 0; j < result.size(); ++j) {
                int count = 1;
                while (j < result.size() - 1 && result[j] == result[j + 1]) {
                    ++j;
                    ++count;
                }
                temp += to_string(count) + result[j];
            }
            result = temp;
        }
        return result;
    }
};
