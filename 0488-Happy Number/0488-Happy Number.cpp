class Solution {
public:
    /*
     * @param n: An integer
     * @return: true if this is a happy number or false
     */
    bool isHappy(int n) {
        // write your code here
        unordered_set<int> visited;
        while (visited.insert(n).second) {
            if (n == 1) {
                return true;
            }
            int sum = 0;
            while (n) {
                int temp = n % 10;
                sum += temp * temp;
                n /= 10;
            }
            n = sum;
        }
        
        return false;
    }
};
