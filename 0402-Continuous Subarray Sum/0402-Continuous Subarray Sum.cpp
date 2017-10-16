class Solution {
public:
    /**
     * @param A an integer array
     * @return  A list of integers includes the index of 
     *          the first number and the index of the last number
     */
    vector<int> continuousSubarraySum(vector<int>& A) {
        // Write your code here
        int start = 0;
        int maxSum = A[0];
        int sum = A[0];
        vector<int> result(2);
        for (int i = 1; i < A.size(); ++i)
        {
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
        
        return result;
    }
};
