class Solution {
public:
    /*
     * @param words: A list of words
     * @return: Return how many different rotate words
     */
    int countRotateWords(vector<string> words) {
        // Write your code here
        unordered_set<string> table;
        for (string word : words) {
            table.insert(smallestPermutation(word));
        }
        return table.size();
    }
    
private:
    string smallestPermutation(string word) {
        string minP = word;
        for (int i = 1; i < word.size(); ++i) {
            string candidate = word.substr(i) + word.substr(0, i);
            if (candidate < minP) {
                minP = candidate;
            }
        }
        return minP;
    }
};
