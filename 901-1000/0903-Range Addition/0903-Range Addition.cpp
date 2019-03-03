class Solution {
public:
    /**
     * @param length: the length of the array
     * @param updates: update operations
     * @return: the modified array after all k operations were executed
     */
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        // Write your code here
        if (length <= 0) {
            return {};
        }
        
        vector<int> result(length);
        for (auto& update : updates) {
            result[update[0]] += update[2];
            if (update[1] < length - 1) {
                result[update[1] + 1] -= update[2];
            }
        }
        
        for (int i = 1; i < length; ++i) {
            result[i] += result[i - 1];
        }
        
        return result;
    }
};
