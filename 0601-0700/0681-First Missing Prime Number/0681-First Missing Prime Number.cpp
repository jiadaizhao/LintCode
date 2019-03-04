class Solution {
public:
    /*
     * @param : an array of integer
     * @return: the first missing prime number
     */
    int firstMissingPrime(vector<int> nums) {
        // write your code here
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n == 0 || nums[0] != 2) {
            return 2;
        }
        
        int num = 3;
        for (int i = 1; i < n; ++i) {
            if (num != nums[i]) {
                return num;
            }
            
            do {
                num += 2;
            } while (!isPrime(num));
        }
        
        return num;
    }
    
private:
    bool isPrime(int num) {
        if (num < 2) {
            return false;
        }
        else if (num == 2) {
            return true;
        }
        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};
