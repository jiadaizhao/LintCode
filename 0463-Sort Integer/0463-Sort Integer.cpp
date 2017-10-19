class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers(vector<int>& A) {
        // Write your code here
        int n = A.size();
        for (int j = 1; j < n; ++j) {
            int temp = A[j];
            int i = j - 1;
            while (i >= 0 && A[i] > temp) {
                A[i + 1] = A[i];
                --i;
            }
            A[i + 1] = temp;
        }
    }
};
