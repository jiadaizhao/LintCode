class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
    int firstMissingPositive(vector<int> A) {
        // write your code here
        int n = A.size();
        for (int i = 0; i < n; ++i) {
            while (A[i] != i + 1 && A[i] >= 1 && A[i] <= n && A[A[i] - 1] != A[i]) {
                swap(A[i], A[A[i] - 1]);
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (A[i] != i + 1) {
                return i + 1;
            }
        }
        
        return n + 1;
    }
};
