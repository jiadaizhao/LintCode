class Solution {
public:
    /**
     * @param n: An integer.
     * return : An array storing 1 to the largest number with n digits.
     */
    vector<int> numbersByRecursion(int n) {
        // write your code here
        vector<int> result;
        dfs(n, 0, result);
        return result;
    }
    
private:
    void dfs(int n, int curr, vector<int>& result)
    {
        if (n == 0) {
            if (curr > 0) {
                result.push_back(curr);
            }
            return;
        }
        
        for (int i = 0; i <= 9; ++i) {
            dfs(n - 1, curr * 10 + i, result);
        }
    }
};
