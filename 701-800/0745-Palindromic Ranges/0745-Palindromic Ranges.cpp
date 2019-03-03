class Solution {
public:
    /**
     * @param L: A positive integer
     * @param R: A positive integer
     * @return: the number of interesting subranges of [L, R]
     */
    int PalindromicRanges(int L, int R) {
        // Write your code here
        unordered_map<int, bool> table;
        for (int i = L; i <= R; ++i) {
            table[i] = isPalindrome(i);
        }
        
        vector<int> presum(2 + R - L);
        for (int i = 1; i < presum.size(); ++i) {
            presum[i] = presum[i - 1] + table[L + i - 1];
        }
        
        int count = 0;
        for (int i = L; i <= R; ++i) {
            for (int j = i; j <= R; ++j) {
                if (((presum[j + 1 - L] - presum[i - L]) & 1) == 0) {
                    ++count;
                }
            }
        }
        return count;
    }
    
private:
    bool isPalindrome(int x) {
        if (x < 0 || (x > 0 && x % 10 == 0)) {
            return false;
        }
        
        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return x == y || y / 10 == x;
    }
};
