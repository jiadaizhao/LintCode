class Solution {
public:
    /**
     * @param n: the number
     * @return: the rank of the number
     */
    int kthPrime(int n) {
        // write your code here
        vector<bool> prime(1 + n, true);
        int count = 0;
        int upper = sqrt(n);
        for (int i = 2; i <= n; ++i) {
            if (prime[i]) {
                ++count;
                if (i > upper) {
                    continue;
                }
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }

        return count;
    }
};
