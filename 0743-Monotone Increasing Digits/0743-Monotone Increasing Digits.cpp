class Solution {
public:
    /**
     * @param num: a non-negative integer N
     * @return: the largest number that is less than or equal to N with monotone increasing digits.
     */
    int monotoneDigits(int num) {
        // write your code here
        string s = to_string(num);
        int j = -1;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] > s[i + 1]) {
                j = i;
                break;
            }
        }
        
        if (j == -1) {
            return num;
        }
        
        for (int k = j; k >= 1; --k) {
            if (s[k - 1] > s[k] - 1) {
                --j;
            }
            else {
                break;
            }
        }
        
        --s[j];
        for (int k = j + 1; k < s.size(); ++k) {
            s[k] = '9';
        }
        return stoi(s);
    }
};
