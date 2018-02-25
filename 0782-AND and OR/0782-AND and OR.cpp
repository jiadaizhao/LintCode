class Solution {
public:
    /**
     * @param n: 
     * @param nums: 
     * @return: return the sum of maximum OR sum, minimum OR sum, maximum AND sum, minimum AND sum.
     */
    long long getSum(int n, vector<int> &nums) {
        // write your code here
        int maxOr = 0, minOr = INT_MAX, maxAnd = INT_MIN, minAnd = INT_MAX;
        for (int num : nums) {
            maxOr |= num;
            minOr = min(minOr, num);
            maxAnd = max(maxAnd, num);
            minAnd &= num;
        }
        long long sum = 0;
        sum = (long long)maxOr + minOr + maxAnd + minAnd;
        return sum;
    }
};
