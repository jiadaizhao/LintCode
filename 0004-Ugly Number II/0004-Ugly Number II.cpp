class Solution {
public:
    /*
     * @param n an integer
     * @return the nth prime number as description.
     */
    int nthUglyNumber(int n) {
        // write your code here
        vector<int> ugly(n, 1);
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; ++i)
        {
            ugly[i] = min(ugly[p2] * 2, min(ugly[p3] * 3, ugly[p5] * 5));
            if (ugly[p2] * 2 == ugly[i])
            {
                ++p2;
            }
            if (ugly[p3] * 3 == ugly[i])
            {
                ++p3;
            }
            if (ugly[p5] * 5 == ugly[i])
            {
                ++p5;
            }
        }
        
        return ugly[n - 1];
    }
};
