class Solution {
public:
    /*
     * @param input: an abstract file system
     * @return: return the length of the longest absolute path to file
     */
    int lengthLongestPath(string &input) {
        // write your code here
        int level = 1, count = 0;
        int maxLen = 0;
        bool isFile = false;
        int n = input.size();
        vector<int> dirLens(1);
        for (int i = 0; i < n; ++i) {
            while (i < n && input[i] == '\t') {
                ++level;
                ++i;
            }
            
            while (i < n && input[i] != '\n') {
                ++count;
                if (input[i] == '.') {
                    isFile = true;
                }
                ++i;
            }
            
            if (isFile) {
                maxLen = max(maxLen, dirLens[level - 1] + count);
            }
            else {
                if (level >= dirLens.size()) {
                    dirLens.push_back(dirLens[level - 1] + count + 1);
                }
                else {
                    dirLens[level] = dirLens[level - 1] + count + 1;
                }
            }
            
            level = 1;
            count = 0;
            isFile = false;
        }
        
        return maxLen;
    }
};
