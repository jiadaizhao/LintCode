class Solution {
public:
    /**
     * @param A: an array
     * @return: the number of arithmetic slices in the array A.
     */
    int numberOfArithmeticSlices(vector<int> &A) {
        // Write your code here
        if (A.size() < 3) {
            return 0;
        }
        int count = 0, len = 2, diff = A[1] - A[0];
        for (int i = 2; i < A.size(); ++i) {
            if (A[i] - A[i - 1] == diff) {
                ++len;
            }
            else {
                if (len >= 3) {
                    count += (len - 1) * (len - 2) / 2;
                }
                len = 2;
                diff = A[i] - A[i - 1];
            }
        }
        
        if (len >= 3) {
            count += (len - 1) * (len - 2) / 2;
        }
        
        return count;
    }
};
