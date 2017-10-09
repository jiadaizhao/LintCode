class Solution {
public:
	/**
	 * @param A : An integer array
	 * @return : An integer 
	 */
    int singleNumberII(vector<int> &A) {
        // write your code here
        int result = 0;;
        for (int i = 0; i < 31; ++i)
        {
            int temp = 0;
            for (int a : A)
            {
                temp += (a >> i) & 1; 
            }
            temp %= 3;
            result |= (temp << i);
        }
        
        return result;
    }
};
