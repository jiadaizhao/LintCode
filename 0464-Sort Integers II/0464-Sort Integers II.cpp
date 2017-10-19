// Quick sort
class Solution {
public:
    /*
     * @param A: an integer array
     * @return: 
     */
    void sortIntegers2(vector<int>& A) {
        // write your code here
        int n = A.size();
        if (n) {
            quickSort(A, 0, n - 1);
        }
    }
    
private:
    void quickSort(vector<int>& A, int start, int end) {
        if (start < end) {
            int pivot = A[start + (end - start) / 2];
            int left = start, right = end;
            while (left <= right) {
                while (left <= right && A[left] < pivot) {
                    ++left;
                }
                
                while (left <= right && A[right] > pivot) {
                    --right;
                }
                
                if (left <= right) {
                    swap(A[left], A[right]);
                    ++left;
                    --right;
                }
            }
            
            quickSort(A, start, right);
            quickSort(A, left, end);
        }
    }
};


// Merge Sort
class Solution {
public:
    /*
     * @param A: an integer array
     * @return: 
     */
    void sortIntegers2(vector<int>& A) {
        // write your code here
        int n = A.size();
        if (n) {
            vector<int> temp(n);
            mergeSort(A, 0, n - 1, temp);
        }
    }
    
private:
    void mergeSort(vector<int>& A, int start, int end, vector<int>& temp) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(A, start, mid, temp);
            mergeSort(A, mid + 1, end, temp);
            merge(A, start, mid, end, temp);
        }
    }
    
    void merge(vector<int>& A, int start, int mid, int end, vector<int>& temp) {
        int i = start, j = mid + 1, k = start;
        while (i <= mid || j <= end) {
            if (j > end || (i <= mid && A[i] <= A[j])) {
                temp[k++] = A[i++];
            }
            else {
                temp[k++] = A[j++];
            }
        }
        
        for (int p = start; p <= end; ++p) {
            A[p] = temp[p];
        }
    }
};
