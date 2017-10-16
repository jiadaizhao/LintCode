class Solution {
public:
    /**
     * @param A an integer array
     * @param start an integer
     * @param end an integer
     * @return the number of possible answer
     */
    int subarraySumII(vector<int>& A, int start, int end) {
        // Write your code here
        int n = A.size();
        vector<int> presum(1 + n);
        for (int i = 1; i <= n; ++i) {
            presum[i] = presum[i - 1] + A[i - 1];
        }
        
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            int lower = presum[i] - end;
            int upper = presum[i] - start;
            count += binarySearch(presum, upper + 1) - binarySearch(presum, lower);
        }
        
        return count;
    }
    
private:
    int binarySearch(vector<int>& presum, int target) {
        int n = presum.size();
        int start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (presum[mid] >= target) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }
        
        if (presum[start] >= target) {
            return start;
        }
        else if (presum[end] >= target) {
            return end;
        }
        else {
            return end + 1;
        }
    }
};
