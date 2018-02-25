class Solution {
public:
    /**
     * @param n: the length of strobogrammatic number
     * @return: All strobogrammatic numbers
     */
    vector<string> findStrobogrammatic(int n) {
        // write your code here
        vector<string> result;
        if (n < 0) return result;
        if (n & 1) {
            --n;
            result = {"0", "1", "8"};
        }
        else {
            result = {""};
        }
        while (n) {
            vector<string> temp;
            for (string s : result) {
                if (n > 2) {
                    temp.push_back('0' + s + '0');
                }
                temp.push_back('1' + s + '1');
                temp.push_back('6' + s + '9');
                temp.push_back('8' + s + '8');
                temp.push_back('9' + s + '6');
            }
            n -= 2;
            result = move(temp);
        }
        return result;
    }
};
