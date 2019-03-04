class Solution {
public:
    /**
     * @param A: The prices [i]
     * @param k: 
     * @return: The ans array
     */
    vector<int> business(vector<int> &A, int k) {
        // Write your code here
        int n = A.size();
        deque<int> dq;
        for (int i = 0; i < k; ++i) {
            while (!dq.empty() && A[dq.back()] >= A[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            while (!dq.empty() && dq.front() < i - k) {
                dq.pop_front();
            }
            if (i + k < n) {
                while (!dq.empty() && A[dq.back()] >= A[i + k]) {
                    dq.pop_back();
                }
                dq.push_back(i + k);
            }
            
            result[i] = A[i] - A[dq.front()];
        }
        return result;
    }
};
