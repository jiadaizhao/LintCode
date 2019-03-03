class Solution {
public:
    /*
     * @param n: a number
     * @return: Gray code
     */
    vector<int> grayCode(int n) {
        // write your code here
        vector<int> result(pow(2, n));
        for (int i = 0; i < result.size(); ++i) {
            result[i] = i ^ (i / 2);
        }
        return result;
    }
};
