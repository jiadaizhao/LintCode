class Solution {
public:
    /**
     * @param A an array
     * @return total of reverse pairs
     */
    long long reversePairs(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0) {
            return 0;
        }
        int count = 0;
        vector<int> temp(n);
        mergeSort(A, 0, n - 1, temp, count);
        return count;
    }

private:
    void mergeSort(vector<int>& A, int start, int end, vector<int>& temp, int& count) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(A, start, mid, temp, count);
            mergeSort(A, mid + 1, end, temp, count);
            merge(A, start, mid, end, temp, count);
        }
    }
    
    void merge(vector<int>& A, int start, int mid, int end, vector<int>& temp, int& count) {
        int i = start, j = mid + 1;
        int k = start;
        while (i <= mid || j <= end) {
            if (j > end || (i <= mid && A[i] <= A[j])) {
                count += j - (mid + 1);
                temp[k++] = A[i++];
            }
            else {
                temp[k++] = A[j++];
            }
        }
        
        for (int i = start; i <= end; ++i) {
            A[i] = temp[i];
        }
    }
};
