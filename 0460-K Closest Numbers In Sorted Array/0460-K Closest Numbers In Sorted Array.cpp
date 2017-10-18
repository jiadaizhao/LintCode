class Solution {
public:
    /*
     * @param A: an integer array
     * @param target: An integer
     * @param k: An integer
     * @return: an integer array
     */
    vector<int> kClosestNumbers(vector<int> &A, int target, int k) {
        // write your code here
        int n = A.size();
        if (n == 0) {
            return {};
        }
        
        int start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (A[mid] >= target) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }
        
        int index;
        if (A[start] >= target) {
            index = start;
        }
        else if (A[end] >= target) {
            index = end;
        }
        else {
            index = end + 1;
        }
        
        int left = index - 1, right = index;
        vector<int> result(k);
        for (int i = 0; i < k; ++i) {
            if (right >= n) {
                result[i] = A[left--];
            } 
            else if (left < 0) {
                result[i] = A[right++];
            }
            else if (target - A[left] <= A[right] - target) {
                result[i] = A[left--];
            }
            else {
                result[i] = A[right++];
            }
        }
        return result;
    }
};
