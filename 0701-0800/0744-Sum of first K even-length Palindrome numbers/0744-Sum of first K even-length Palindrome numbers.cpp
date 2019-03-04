class Solution {
public:
    /**
     * @param k: 
     * @return: the sum of first k even-length palindrome numbers
     */
    int sumKEven(int k) {
        // Write your code here
        int sum = 0;
        for (int i = 1; i <= k; ++i) {
            string num = to_string(i);
            string rev(num);
            reverse(rev.begin(), rev.end());
            sum += stoi(num + rev);
        }
        return sum;
    }
};
