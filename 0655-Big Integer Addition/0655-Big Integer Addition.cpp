class Solution {
public:
    /**
     * @param num1 a non-negative integers
     * @param num2 a non-negative integers
     * @return return sum of num1 and num2
     */
    string addStrings(string& num1, string& num2) {
        // Write your code here
        int m = num1.size();
        int n = num2.size();
        string result;
        int i = m - 1, j = n - 1;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            sum += (i >= 0) ? num1[i--] - '0' : 0;
            sum += (j >= 0) ? num2[j--] - '0' : 0;
            carry = sum / 10;
            sum %= 10;
            result += '0' + sum;
        }
        
        if (carry) {
            result += '1';
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
