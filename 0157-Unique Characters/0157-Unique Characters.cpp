class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        vector<int> table(256);
        for (char c : str)
        {
            if (table[c]++)
            {
                return false;
            }
        }
        
        return true;
    }
};
