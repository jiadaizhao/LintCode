class Solution {
public:
    /*
     * @param A: An integer array
     * @param B: An integer array
     * @return: Their smallest difference.
     */
    int smallestDifference(vector<int> &A, vector<int> &B) {
        // write your code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int minDiff = INT_MAX;
        int m = A.size(), n = B.size();
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (A[i] < B[j]) {
                minDiff = min(minDiff, B[j] - A[i]);
                ++i;
            }
            else if (A[i] > B[j]) {
                minDiff = min(minDiff, A[i] - B[j]);
                ++j;
            }
            else {
                return 0;
            }
        }
        
        return minDiff;
    }
};
