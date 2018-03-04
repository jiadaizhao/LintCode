class Solution {
public:
    /**
     * @param n: a Integer
     * @return: the first n-line Yang Hui's triangle
     */
    vector<vector<int>> calcYangHuisTriangle(int n) {
        // write your code here
        vector<vector<int>> result;
        while (n--) {
            if (result.size() == 0) {
                result.push_back({1});
            }
            else if (result.size() == 1) {
                result.push_back({1, 1});
            }
            else {
                vector<int> path(result.back().size() + 1, 1);
                for (int i = 1; i < result.back().size(); ++i) {
                    path[i] = result.back()[i - 1] + result.back()[i];
                }
                result.push_back(path);
            }
        }
        return result;
    }
};
