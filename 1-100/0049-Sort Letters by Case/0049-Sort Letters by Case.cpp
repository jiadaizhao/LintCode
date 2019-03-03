class Solution {
public:
    /** 
     * @param chars: The letters array you should sort.
     */
    void sortLetters(string &letters) {
        // write your code here
        int i = 0;
        for (int j = 0; j < letters.size(); ++j)
        {
            if (letters[j] >= 'a' && letters[j] <= 'z')
            {
                swap(letters[i++], letters[j]);
            }
        }
    }
};
