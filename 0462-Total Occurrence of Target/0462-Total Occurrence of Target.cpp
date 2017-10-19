class Solution {
public:
    /*
     * @param A: A an integer array sorted in ascending order
     * @param target: An integer
     * @return: An integer
     */
    int totalOccurrence(vector<int> &A, int target) {
        // write your code here
        int n = A.size();
        if (n == 0) {
            return 0;
        }
        
        int start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (A[mid] > target) {
                end = mid - 1;
            }
            else if (A[mid] == target) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }
        
        int index1 = -1;
        if (A[start] == target) {
            index1 = start;
        }
        else if (A[end] == target) {
            index1 = end;
        }
        else {
            return 0;
        }
        
        start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (A[mid] > target) {
                end = mid - 1;
            }
            else if (A[mid] == target) {
                start = mid;
            }
            else {
                start = mid + 1;
            }
        }
        
        int index2 = -1;
        if (A[end] == target) {
            index2 = end;
        }
        else if (A[start] == target) {
            index2 = start;
        }
        
        return index2 - index1 + 1;
    }
};
