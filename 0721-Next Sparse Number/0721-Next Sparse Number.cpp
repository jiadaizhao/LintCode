class Solution {
public:
    /*
     * @param : a number
     * @return: return the next sparse number behind x
     */
    int nextSparseNum(int x) {
        // write your code here
        int i = 0;
        while (i < 30) {
            if ((x & (1 << i)) && (x & (1 << (i + 1)))) {
                ++i;
                while (x & (1 << i)) {
            		++i;
            	}
            	x &= ~((1 << i) - 1);
            	x |= 1 << i;
            }
            else {
                ++i;
            }
        }
        return x;
    }
};
