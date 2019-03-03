class Solution {
public:
    /**
     * @param n: an integer
     * @return: the number of solutions
     */
    int threeSum2(int n) {
        // Write your code here
        int count = 0;
        int upper = sqrt(n);
        for (int i = 0; i <= upper; ++i) {
            int start = i, end = upper;
            int target = n - i * i;
            while (start <= end) {
                int curr = start * start + end * end;
                if (curr < target) {
                    ++start;
                }
                else if (curr > target) {
                    --end;
                }
                else {
                    ++count;
                    ++start;
                }
            }
        }
        return count;
    }
};
