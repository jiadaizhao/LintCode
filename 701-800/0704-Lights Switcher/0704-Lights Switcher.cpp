class Solution {
public:
    /*
     * @param : number of lights
     * @param : number of operations
     * @return: the number of status
     */
    int flipLights(int n, int m) {
        // write your code here
        if (n == 0 || m == 0) {
            return 1;
        }

        if (n == 1) {
            return 2;
        }
        if (n == 2) {
            return 4 - m % 2;
        }
        if (m == 1) {
            return 4;
        }
        if (m == 2) {
            return 7;
        }
        return 8;
    }
};
