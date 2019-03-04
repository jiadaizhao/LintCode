class Solution {
public:
    /**
     * @param a: a integer represent the length of one edge
     * @param b: a integer represent the length of one edge
     * @param c: a integer represent the length of one edge
     * @return: whether three edges can form a triangle
     */
    bool isValidTriangle(int a, int b, int c) {
        // write your code here
        int maxV = max({a, b, c});
        if (maxV == a) {
            return b + c > a;
        }
        else if (maxV == b) {
            return a + c > b;
        }
        else {
            return a + b > c;
        }
    }
};
