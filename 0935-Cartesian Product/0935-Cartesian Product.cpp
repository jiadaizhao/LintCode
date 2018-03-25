class Solution {
public:
    /**
     * @param setList: The input set list
     * @return: the cartesian product of the set list
     */
    vector<vector<int>> getSet(vector<vector<int>> &setList) {
        // Write your code here
        vector<vector<int>> result;
        vector<int> path;
        dfs(setList, 0, path, result);
        return result;
    }
    
private:
    void dfs(vector<vector<int>>& setList, int start, vector<int>& path, vector<vector<int>>& result) {
        if (start == setList.size()) {
            result.push_back(path);
            return;
        }
        
        for (int i = 0; i < setList[start].size(); ++i) {
            path.push_back(setList[start][i]);
            dfs(setList, start + 1, path, result);
            path.pop_back();
        }
    }
};
