class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0)
        {
            return {};
        }
        vector<long long> result(n, 1);
        
        for (int i = 1; i < n; ++i)
        {
            result[i] = result[i - 1] * nums[i - 1];
        }
        
        long long temp = 1;
        for (int i = n - 2; i >= 0; --i)
        {
            temp *= nums[i + 1];
            result[i] *= temp;
        }
        
        return result;
    }
};
