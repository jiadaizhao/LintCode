class Solution {
public:
    /**
     * @param A : An integer array
     * @return : Two integers
     */
    vector<int> singleNumberIII(vector<int> &A) {
        // write your code here
        int temp = 0;
        for (int a : A)
        {
            temp ^= a;
        }
        
        int diff = (-temp) & temp;
        vector<int> result(2);
        for (int a : A)
        {
            if (a & diff)
            {
                result[0] ^= a;
            }
            else
            {
                result[1] ^= a;
            }
        }
        
        return result;
    }
};
