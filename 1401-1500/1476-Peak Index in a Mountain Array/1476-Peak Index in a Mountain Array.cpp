class Solution {
public:
    /**
     * @param A: an array
     * @return: any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
     */
    int peakIndexInMountainArray(vector<int> &A) {
        // Write your code here
        int low = 0, high = A.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (A[mid] < A[mid + 1]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        
        return low;
    }
};
