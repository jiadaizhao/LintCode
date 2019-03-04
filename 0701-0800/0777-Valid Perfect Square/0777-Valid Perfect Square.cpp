class Solution {
public:
    /**
     * @param num: a positive integer
     * @return: if num is a perfect square else False
     */
    bool isPerfectSquare(int num) {
        // write your code here
        long start = 1, end = num / 2;
        while (start + 1 < end) {
            long mid = start + (end - start) / 2;
            long product = mid * mid;
            if (product < num) {
                start = mid + 1;
            }
            else if (product > num) {
                end = mid - 1;
            }
            else {
                return true;
            }
        }
        
        return (start * start == num) || (end * end == num);
    }
};
