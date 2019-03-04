class Solution {
public:
    /*
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> &digits) {
        // write your code here
        int n = digits.size();
        if (n == 0) {
            return {};
        }
        
        int i = n - 1;
        while (i >= 0 && digits[i] == 9) {
            digits[i] = 0;
            --i;
        }
        
        if (i >= 0) {
            ++digits[i];
        }
        else {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
