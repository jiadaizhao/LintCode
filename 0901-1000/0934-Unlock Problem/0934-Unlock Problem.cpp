class Solution {
public:
    /**
     * @param n: the number of keys
     * @param m: the number of locks
     * @return: the numbers of open locks
     */
    int unlock(int n, int m) {
        // Write your code here
        vector<int> open(1 + m);
    	for (int i = 1; i <= n; ++i) {
    		for (int j = i; j <= m; j += i) {
    			open[j] ^= 1;
    		}
    	}
    	int count = 0;
    	for (int j = 1; j <= m; ++j) {
    		count += open[j];
    	}
    	return count;
    }
};
