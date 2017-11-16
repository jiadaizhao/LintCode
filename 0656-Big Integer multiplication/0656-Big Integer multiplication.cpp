class Solution {
public:
    /*
     * @param num1: a non-negative integers
     * @param num2: a non-negative integers
     * @return: return product of num1 and num2
     */
    string multiply(string &num1, string &num2) {
        // write your code here
        vector<int> product(num1.size() + num2.size());
        for (int i = num1.size() - 1; i >= 0; --i) {
            for (int j = num2.size() - 1; j >= 0; --j) {
                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = (num1[i] - '0') * (num2[j] - '0') + product[p2];
                product[p1] += sum / 10;
                product[p2] = sum % 10;
            }
        }
        
        string result;
        int i = 0;
        while (i < product.size() - 1 && product[i] == 0) {
            ++i;
        }
        
        while (i < product.size()) {
            result += '0' + product[i++];
        }
        return result;
    }
};
