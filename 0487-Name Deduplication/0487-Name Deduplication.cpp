class Solution {
public:
    /**
     * @param names: a string array
     * @return: a string array
     */
    vector<string> nameDeduplication(vector<string> &names) {
        // write your code here
        unordered_set<string> visited;
        vector<string> result;
        for (string name : names) {
            transform(name.begin(), name.end(), name.begin(), ::tolower);
            if (!visited.count(name)) {
                visited.insert(name);
                result.push_back(name);
            }
        }
        return result;
    }
};
