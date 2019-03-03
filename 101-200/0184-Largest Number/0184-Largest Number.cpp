class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */
    string largestNumber(vector<int> &num) {
        // write your code here
        string result;
        int n = num.size();
        if (n == 0)
        {
            return result;
        }
        
        vector<string> strs;
        for (int i : num)
        {
            strs.push_back(to_string(i));
        }
        
        sort(strs.begin(), strs.end(), cmp());
        for (string str : strs)
        {
            result += str;
        }
        
        return (result[0] == '0') ? "0" : result;
    }
    
private:
    struct cmp
    {
        bool operator()(string s1, string s2)
        {
            return s1 + s2 > s2 + s1;
        }
    };
};
