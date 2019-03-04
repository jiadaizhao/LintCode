class Solution {
public:
    /*
     * @param ratings: Children's ratings
     * @return: the minimum candies you must give
     */
    int candy(vector<int> &ratings) {
        // write your code here
        int n = ratings.size();
        vector<int> count(n, 1);
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                count[i] = count[i - 1] + 1;
            }
        }
        
        int sum = count[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1] && count[i] <= count[i + 1]) {
                count[i] = count[i + 1] + 1;
            }
            sum += count[i];
        }
        
        return sum;
    }
};
