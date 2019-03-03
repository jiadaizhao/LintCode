class Solution {
public:
    /**
     * @param n: the number of digit
     * @return: the largest palindrome mod 1337
     */
    int largestPalindrome(int n) {
        // write your code here
        if (n == 1) {
            return 9;
        }
        int upper = pow(10, n) - 1;
        int lower = pow(10, n - 1);
        for (int i = upper; i >= lower; --i) {
            long candidate = buildPalindrome(i);
            for (long j = upper; j * j >= candidate; --j) {
                if (candidate % j == 0) {
                    return candidate % 1337;
                }
            }
        }

        return -1;
    }
    
private:
    long buildPalindrome(int n) {
        string s = to_string(n);
        string revs(s);
        reverse(revs.begin(), revs.end());
        return stol(s + revs);
    }
};
