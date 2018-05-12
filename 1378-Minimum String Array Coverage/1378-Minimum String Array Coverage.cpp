class Solution {
public:
    /**
     * @param tagList: The tag list.
     * @param allTags: All the tags.
     * @return: Return the answer
     */
    int getMinimumStringArray(vector<string> &tagList, vector<string> &allTags) {
        // Write your code here
        int n = allTags.size();
        if (n < tagList.size()) {
            return -1;
        }
        unordered_map<string, int> table;
        int count = 0;
        for (string tag : tagList) {
            ++table[tag];
            ++count;
        }
        
        int minLen = n + 1, start = 0;
        for (int i = 0; i < n; ++i) {
            if (--table[allTags[i]] >= 0) {
                --count;
            }
            while (count == 0) {
                minLen = min(minLen, i - start + 1);
                if (++table[allTags[start++]] > 0) {
                    ++count;
                }
            }
        }
        return minLen > n ? -1 : minLen;
    }
};
