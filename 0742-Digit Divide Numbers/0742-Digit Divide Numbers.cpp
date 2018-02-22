class Solution {
public:
    /**
     * @param lower: Integer : lower bound
     * @param upper: Integer : upper bound
     * @return: a list of every possible Digit Divide Numbers
     */
    vector<int> digitDivideNums(int lower, int upper) {
        // write your code here
        vector<int> result;
        for (long long i = lower; i <= upper; ++i) {
            int num = i;
            bool valid = true;
            while (num) {
                int temp = num % 10;
                if (temp == 0 || i % temp) {
                    valid = false;
                    break;
                }
                num /= 10;
            }
            if (valid) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
