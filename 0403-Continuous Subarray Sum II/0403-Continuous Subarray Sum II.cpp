class Solution {
public:
    /**
     * @param A an integer array
     * @return  A list of integers includes the index of 
     *          the first number and the index of the last number
     */
    vector<int> continuousSubarraySumII(vector<int>& A) {
        // Write your code here
        int start = 0;
        int maxSum = A[0];
        int sum = A[0];
        vector<int> result(2);
        int totalSum = A[0];
        for (int i = 1; i < A.size(); ++i)
        {
            totalSum += A[i];
            if (sum < 0)
            {
                sum = 0;
                start = i;
            }
            sum += A[i];
            if (maxSum < sum)
            {
                maxSum = sum;
                result[0] = start;
                result[1] = i;
            }
        }
        
        int minSum = A[0];
        int left = 0, right = 0;
        sum = A[0];
        start = 0;
        for (int i = 1; i < A.size(); ++i)
        {
            if (sum > 0)
            {
                sum = 0;
                start = i;
            }
            sum += A[i];
            if (minSum > sum)
            {
                minSum = sum;
                left = start;
                right = i;
            }
        }
        
        int n = A.size();
        if (totalSum - minSum > maxSum && (left != 0 || right != n - 1))
        {
            result[0] = right + 1;
            result[1] = left - 1;
        }
        return result;
    }
};
