class Solution {
public:
    /**
     * @param num: the given number
     * @return: The base 7 string representation
     */
    string convertToBase7(int num) {
        // Write your code here
        if (num == 0) {
            return "0";
        }
        
        string result;
        int sign = 1;
        if (num < 0) {
            sign = -1;
        }
        
        long n = abs(num);
        while (n) {
            result += '0' + (n % 7);
            n /= 7;
        }
        
        if (sign == -1) {
            result += '-';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
