class Solution {
public:
    /**
     * @param k: The k
     * @param a: The A
     * @param b: The B
     * @return: The answer
     */
    string addition(int k, string &a, string &b) {
        // Write your code here
        int m = a.size(), n = b.size();
        int i = m - 1, j = n - 1;
        string result;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i--] - '0';
            }
            if (j >= 0) {
                sum += b[j--] - '0';
            }
            result += '0' + (sum % k);
            carry = sum / k;
        }
        if (carry) {
            result += '1';
        }
        while (result.back() == '0') {
            result.pop_back();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
