class Solution {
public:
    /**
     * @param tuple: the tuple string
     * @param n: an integer
     * @return: the product of all the nth element in each array
     */
    long long tupleMultiply(string &tuple, int n) {
        // Write your code here
        int m = tuple.size(), i = 0;
    	long long result = 1;
    	while (i < m) {
    		++i; // "("
    		for (int j = 0; j < n - 1; ++j) {
    			if (tuple[i] == '-') ++i;
    			while (isdigit(tuple[i])) ++i;
    			++i; // ","
    		}
    		long long num = 0, sign = 1;
    		if (tuple[i] == '-') {
    			++i;
    			sign = -1;
    		}
    		while (isdigit(tuple[i])) {
    			num = num * 10 + (tuple[i++] - '0');
    		}
    		result *= num * sign;
    		while (tuple[i] != ')') ++i;
    		i += 2;
    	}
    	return result;
    }
};
