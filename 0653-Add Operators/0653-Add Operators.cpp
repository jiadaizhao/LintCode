class Solution {
public:
    /*
     * @param num: a string contains only digits 0-9
     * @param target: An integer
     * @return: return all possibilities
     */
    vector<string> addOperators(string &num, int target) {
        // write your code here
        vector<string> result;
        if (num.size() != 0) {
            dfs(num, 0, "", 0, 0, target, result);
        }
        return result;
    }

private:
    void dfs(string &num, int start, string path, long sum, long prev, int target, vector<string> &result) {
        if (start == num.size()) {
            if (sum == target) {
                result.push_back(path);
            }
            return;
        }
        
        for (int i = start; i < num.size(); ++i) {
            string temp = num.substr(start, i - start + 1);
            long curr = stol(temp);
            if (temp != to_string(curr)) {
                break;
            }
            
            if (start == 0) {
                dfs(num, i + 1, temp, curr, curr, target, result);
            }
            else {
                dfs(num, i + 1, path + "+" + temp, sum + curr, curr, target, result);
                dfs(num, i + 1, path + "-" + temp, sum - curr, -curr, target, result);
                dfs(num, i + 1, path + "*" + temp, sum - prev + prev * curr, prev * curr, target, result);
            }
        }
    }
};
