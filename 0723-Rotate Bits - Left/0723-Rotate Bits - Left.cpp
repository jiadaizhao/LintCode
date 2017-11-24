class Solution {
public:
    /*
     * @param : a number
     * @param : digit needed to be rorated
     * @return: a number
     */
    int leftRotate(int n, int d) {
        // write code here
        int result = n << d;
        result |= n >> (32 - d);
        return result;
    }
};
