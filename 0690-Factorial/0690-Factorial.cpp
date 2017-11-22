class Solution {
public:
    /*
     * @param : an integer
     * @return:  the factorial of n
     */
    string factorial(int n) {
        // write your code here
        if (n == 0) {
            return "1";
        }
        
        return factorial(1, n);
    }
    
private:
    string factorial(int start, int end) {
        if (start == end) {
            return to_string(start);
        }
        
        int mid = start + (end - start) / 2;
        string num1 = factorial(start, mid);
        string num2 = factorial(mid + 1, end);
        return multiply(num1, num2);
    }
    
    string multiply(string &num1, string &num2) {
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
