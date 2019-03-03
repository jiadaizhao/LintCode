class Solution {
public:
    /*
     * @param : the number of "1"s on a given timetable
     * @return: all possible time
     */
    vector<string> binaryTime(int num) {
        // Write your code here
        vector<int> hours = {8, 4, 2, 1};
        vector<int> mins = {32, 16, 8, 4, 2, 1};
        vector<string> result;
        for (int i = 0; i <= num; ++i) {
            vector<int> hs = generate(hours, i, 11);
            vector<int> ms = generate(mins, num - i, 59);
            for (int h : hs) {
                for (int m : ms) {
                    result.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
                }
            }
        }
        return result;
    }
    
private:
    vector<int> generate(vector<int>& nums, int count, int threshold) {
        vector<int> result;
        dfs(nums, 0, count, 0, threshold, result);
        return result;
    }
    
    void dfs(vector<int>& nums, int start, int count, int val, int threshold, vector<int>& result) {
        if (count == 0) {
            result.push_back(val);
            return;
        }
        
        for (int i = start; i < nums.size() && nums.size() - i >= count; ++i) {
            if (val + nums[i] <= threshold) {
                dfs(nums, i + 1, count - 1, val + nums[i], threshold, result);
            }
        }
    }
};
