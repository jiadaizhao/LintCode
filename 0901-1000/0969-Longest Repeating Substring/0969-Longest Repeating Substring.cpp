struct pairhash {
    template<typename T, typename U>
    size_t operator()(const pair<T, U>& p) const {
        return hash<T>()(p.first) ^ hash<U>()(p.second);
    }
};

class Solution {
public:
    /**
     * @param str: The input string
     * @param k: The repeated times
     * @return: The answer
     */
    int longestRepeatingSubsequenceII(string &str, int k) {
        // Write your code here
        int seed = 31;
        int MOD = 1000000007;
        unordered_map<pair<long long, int>, int, pairhash> table;
        for (int i = 0; i < str.size(); ++i) {
            long long hashValue = 0;
            for (int j = i; j < str.size(); ++j) {
                hashValue = (seed * hashValue + (str[j] - 'a') + 1) % MOD;
                ++table[{hashValue, j - i + 1}];
            } 
        }
        
        int maxLen = 0;
        for (auto t : table) {
            if (t.second >= k) {
                maxLen = max(maxLen, t.first.second);
            }
        }
        return maxLen;
    }
};
