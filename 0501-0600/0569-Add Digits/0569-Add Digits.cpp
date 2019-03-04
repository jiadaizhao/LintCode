class Solution {
public:
    /*
     * @param num: a non-negative integer
     * @return: one digit
     */
    int addDigits(int num) {
        // write your code here
        return 1 + (num - 1) % 9;
    }
};
