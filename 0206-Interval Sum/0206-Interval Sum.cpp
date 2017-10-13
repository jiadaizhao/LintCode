/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution { 
public:
    /**
     *@param A, queries: Given an integer array and an query list
     *@return: The result list
     */
    vector<long long> intervalSum(vector<int> &A, vector<Interval> &queries) {
        // write your code here
        vector<long long> sum(1 + A.size());
        for (int i = 1; i <= A.size(); ++i)
        {
            sum[i] = sum[i - 1] + A[i - 1];
        }
        
        vector<long long> result;
        for (Interval q : queries)
        {
            result.push_back(sum[q.end + 1] - sum[q.start]);
        }
        
        return result;
    }
};
