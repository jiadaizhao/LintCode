class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
        if (k == 0 && n == 0)
        {
            return 1;
        }
        int base = 1;
        int count = 0;
        while (n / base)
        {
            int curr = n / base % 10;
            int low = n % base;
            int high = n / (base * 10);
            if (curr < k)
            {
                count += high * base;
            }
            else if (curr == k)
            {
                count += high * base + low + 1;
            }
            else if (high != 0 || k != 0)
            {
                count += (high + 1) * base;
            }
            base *= 10;
        }
        
        return count;
    }
};
