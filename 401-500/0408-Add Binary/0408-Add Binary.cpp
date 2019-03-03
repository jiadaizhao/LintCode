class Solution {
public:
    /*
     * @param a: a number
     * @param b: a number
     * @return: the result
     */
    string addBinary(string &a, string &b) {
        // write your code here
        int m = a.size();
        int n = b.size();
        int carry = 0;
        int i = m - 1, j = n- 1;
        string result;
        while (i >= 0 || j >= 0) {
            carry += (i >= 0) ? a[i--] - '0' : 0;
            carry += (j >= 0) ? b[j--] - '0' : 0;
            result = char('0' + carry % 2) + result;
            carry /= 2;
        }
        
        if (carry) {
            result = '1' + result;
        }
        
        return result;
    }
};
