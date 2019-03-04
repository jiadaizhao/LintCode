class Solution {
public:
    /**
     * @param num: the given array
     * @param rem: another given array
     * @return: The minimum positive number of conditions to meet the conditions
     */
    int remainderTheorem(vector<int> &num, vector<int> &rem) {
        // write your code here
        int n = num.size();
        long long product = 1;
        for (int i = 0; i < n; ++i) {
            product *= num[i];
        }
        
        long long result = 0;
        for (int i = 0; i < n; ++i) {
            long long pp = product / num[i];
            result += rem[i] * modInverse(pp, num[i]) * pp;
        }
     
        return result % product;
    }
    
private:
    int modInverse(long long a, long long b) {
        int x, y;
        int g = gcdExtended(a, b, x, y);
        return (x + b) % b;
    }
    int gcdExtended(long long a, long long b, int &x, int &y) {
        if (a == 0) {
            x = 0;
            y = 1;
            return b;
        }
     
        int x1, y1;
        int gcd = gcdExtended(b % a, a, x1, y1);

        x = y1 - (b / a) * x1;
        y = x1;
     
        return gcd;
    }
};
