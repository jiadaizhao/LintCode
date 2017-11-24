class Solution {
public:
    /*
     * @param k: An integer
     * @return: all amicable pairs
     */
    vector<vector<int>> amicablePair(int k) {
        // write your code here
        unordered_map<int, int> sums;
        vector<vector<int>> result;
        for (int i = 2; i <= k; ++i) {
            int sum = calculateSum(i);
            if (sums[sum] == i) {
                result.push_back({sum, i});
            }
            sums[i] = sum;
        }
        
        return result;
    }
    
private:
    int calculateSum(int num) {
        int sum = 1;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum;
    }
};
