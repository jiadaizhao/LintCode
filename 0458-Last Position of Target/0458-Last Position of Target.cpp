class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int lastPosition(vector<int>& A, int target) {
        // Write your code here
        int n = A.size();
        if (n == 0) {
            return -1;
        }
        
        int start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (A[mid] < target) {
                start = mid + 1;
            }
            else if (A[mid] == target) {
                start = mid;
            }
            else {
                end = mid - 1;
            }
        }
        
        if (A[end] == target) {
            return end;
        }
        else if (A[start] == target) {
            return start;
        }
        else {
            return -1;
        }
    }
};
