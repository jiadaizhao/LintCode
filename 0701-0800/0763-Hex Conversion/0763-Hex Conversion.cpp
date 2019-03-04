class Solution {
public:
    /**
     * @param n: a decimal number
     * @param k: a Integer represent base-k
     * @return: a base-k number
     */
    string hexConversion(int n, int k) {
        // write your code here
        if (n == 0) {
            return "0";
        }
        string result;
        while (n) {
            int curr = n % k;
            if (curr < 10) {
                result += '0' + curr;
            }
            else {
                result += 'A' + (curr - 10);
            }
            n /= k;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
