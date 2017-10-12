class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    string DeleteDigits(string A, int k) {
        // wirte your code here
        int n = A.size();
        if (n == k)
        {
            return "";
        }
        
        vector<char> St;
        for (char c : A)
        {
            while (!St.empty() && St.back() > c && k)
            {
                St.pop_back();
                k--;
            }
            St.push_back(c);
        }
        
        while (!St.empty() && k)
        {
            St.pop_back();
            k--;
        }
        
        string result;
        for (char c : St)
        {
            if (result.size() || c != '0')
            {
                result += c;
            }
        }
        
        return result.size() ? result : "0";
    }
};
