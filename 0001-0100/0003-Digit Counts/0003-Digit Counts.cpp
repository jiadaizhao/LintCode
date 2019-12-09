class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
        if (k == 0 && n == 0) {
            return 1;
        }
        int count = 0;
        for (int base = 1; base <= n; base *= 10) {
            int curr = n / base % 10;
            int low = n % base;
            int high = n / (base * 10);
            if (k != 0) {
                if (curr < k) {
                    count += high * base;
                }
                else if (curr == k) {
                    count += high * base + low + 1;
                }
                else {
                    count += (high + 1) * base;
                }
            }
            else {
                if (base == 1) {
                    count += high + 1;
                }
                else if (high != 0) {
                    if (curr > 0) {
                        count += high * base;
                    }
                    else {
                        count += (high - 1) * base + low + 1;
                    }
                }
            }
        }
        
        return count;
    }
};
