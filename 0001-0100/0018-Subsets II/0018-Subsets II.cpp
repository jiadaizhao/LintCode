class Solution {
public:
    /**
     * @param S: A set of numbers.
     * @return: A list of lists. All valid subsets.
     */
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        // write your code here
        sort(S.begin(), S.end());
    	vector<vector<int>> result;
    	vector<int> path;
    	dfs(S, 0, path, result);
    	return result;
    }
private:
    void dfs(vector<int>& S, int start, vector<int>& path, vector<vector<int>>& result)
    {
        result.push_back(path);
        for (int i = start; i < S.size(); ++i)
        {
            if (i == start || S[i] != S[i - 1])
            {
                path.push_back(S[i]);
                dfs(S, i + 1, path, result);
                path.pop_back();
            }
        }
    }
};
