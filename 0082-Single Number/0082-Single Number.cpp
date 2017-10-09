class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        // write your code here
        int result = 0;
        for (int a : A)
        {
            result ^= a;
        }
        
        return result;
    }
};
