class Solution {
public:
    /**
     * @param nums n non-negative integer array
     * @return a string
     */
    string minNumber(vector<int>& nums) {
        // Write your code here
        int n = nums.size();
        if (n == 0)
        {
            return "";
        }
        vector<string> strs(n);
        for (int i = 0; i < n; ++i)
        {
            strs[i] = to_string(nums[i]);
        }
        
        sort(strs.begin(), strs.end(), cmp());
        string result;
        for (string str : strs)
        {
            if (str != "0")
            {
                result += str;
            }
        }
        
        if (result.size() == 0)
        {
            return "0";
        }
        else
        {
            return result;
        }
    }

private:
    struct cmp {
        bool operator()(string s1, string s2) {
            return s1 + s2 < s2 + s1;
        }    
    };
};
