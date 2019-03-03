class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        if (s.size() != t.size())
        {
            return false;
        }
        vector<int> table(256);
        for (char c : s)
        {
            ++table[c];
        }
        
        for (char c : t)
        {
            if (--table[c] < 0)
            {
                return false;
            }
        }
        
        return true;
    }
};
