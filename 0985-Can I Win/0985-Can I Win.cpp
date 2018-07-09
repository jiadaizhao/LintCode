class Solution {
public:
    /**
     * @param maxChoosableInteger: a Integer
     * @param desiredTotal: a Integer
     * @return: if the first player to move can force a win
     */
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        // Write your code here
        if (maxChoosableInteger >= desiredTotal) {
            return true;
        }
        
        if ((1 + maxChoosableInteger) * maxChoosableInteger / 2 < desiredTotal) {
            return false;
        }
        
        int used = 0;
        return helper(used, maxChoosableInteger, desiredTotal);
    }
    
private:
    unordered_map<int, bool> cache;
    bool helper(int used, int maxChoosableInteger, int desiredTotal) {
        if (desiredTotal <= 0) {
            return false;
        }
        if (cache.find(used) != cache.end()) {
            return cache[used];
        }
        
        int key = used;
        for (int bit = 1; bit <= maxChoosableInteger; ++bit) {
            int mask = 1 << bit;
            if ((used & mask) == 0) {
                used |= mask;
                if (!helper(used, maxChoosableInteger, desiredTotal - bit)) {
                    return cache[key] = true;
                }
                
                used &= (~mask);
            }
        }
        
        return cache[key] = false;
    }
};
