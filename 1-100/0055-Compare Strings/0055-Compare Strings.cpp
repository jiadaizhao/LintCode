class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        vector<int> table(26);
        for (char a : A)
        {
            ++table[a - 'A'];
        }
        
        for (char b : B)
        {
            if (--table[b - 'A'] < 0)
            {
                return false;
            }
        }
        
        return true;
    }
};
