class Solution {
public:
    /**
     * @param num: a string
     * @return: Is it a valid additive number
     */
    bool isAdditiveNumber(string &num) {
        // Write your code here
        int n = num.size();
        if (n < 3) {
            return false;
        }
        
        for (int i = 1; i <= n / 2; ++i) {
            for (int j = 1; j <= n / 2; ++j) {
                if (n - i - j < max(i, j)) {
                    break;
                }
                
                string s1 = num.substr(0, i);
                string s2 = num.substr(i, j);
                if (dfs(num, i + j, s1, s2)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
private:
    bool dfs(string& num, int start, string& s1, string& s2) {
        if (start == num.size()) {
            return true;
        }
        
        if (s1.size() > 1 && s1[0] == '0' || s2.size() > 1 && s2[0] == '0' || (s1.size() > 1 || s2.size() > 1) && num[start] == '0') {
            return false;
        }
        
        string sum = add(s1, s2);
        string s3 = num.substr(start, sum.size());
        if (sum != s3) {
            return false;
        }
        else {
            return dfs(num, start + sum.size(), s2, sum);
        }
    }
    
    string add(string& s1, string& s2) {
        string result;
        int carry = 0, i = s1.size() - 1, j = s2.size() - 1;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            sum += (i >= 0) ? s1[i--] - '0' : 0;
            sum += (j >= 0) ? s2[j--] - '0' : 0;
            carry = sum / 10;
            sum %= 10;
            result += '0' + sum;
        }
        
        if (carry) {
            result += '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
