class Solution {
public:
    /**
     * @param A a string
     * @param B a string
     * @return a boolean
     */
    bool stringPermutation(string& A, string& B) {
        // Write your code here
        if (A.size() != B.size())
        {
            return false;
        }
        
        vector<int> count(256);
        for (char c : A)
        {
            ++count[c];
        }
        
        for (char c : B)
        {
            if (--count[c] < 0)
            {
                return false;
            }
        }
        
        return true;
    }
};
