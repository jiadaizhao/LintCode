class Solution {
public:
    /**
     * @param A: an integer array.
     * @param k: a positive integer (k <= length(A))
     * @param target: a integer
     * @return a list of lists of integer 
     */
    vector<vector<int> > kSumII(vector<int> A, int k, int target) {
        // write your code here
        vector<vector<int>> result;
        vector<int> path;
        sort(A.begin(), A.end());
        dfs(A, 0, k, 0, target, path, result);
        return result;
    }
    
private:
    void dfs(vector<int>& A, int start, int k, int sum, int target, vector<int>& path, vector<vector<int>>& result)
    {
        if (k == 0 || start == A.size())
        {
            if (sum == target && k == 0)
            {
                result.push_back(path);
            }
            return;
        }
        
        for (int i = start; i < A.size() && sum + A[i] <= target; ++i)
        {
            path.push_back(A[i]);
            dfs(A, i + 1, k - 1, sum + A[i], target, path, result);
            path.pop_back();
        }
    }
};
