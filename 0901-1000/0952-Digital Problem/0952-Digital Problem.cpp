class Solution {
public:
    /**
     * @param n: the number n 
     * @return: the times n convert to 1
     */
    int digitConvert(int n) {
        // Write your code here 
        int count = 0;
        while (n != 1) {
            ++count;
            if (n & 1) {
                n = n * 3 + 1;
            }
            else {
                n >>= 1;
            }
        }
        return count;
    }
};
