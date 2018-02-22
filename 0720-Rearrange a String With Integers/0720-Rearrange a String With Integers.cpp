class Solution {
public:
    /*
     * @param str: a string containing uppercase alphabets and integer digits
     * @return: the alphabets in the order followed by the sum of digits
     */
    string rearrange(string &str) {
        // Write your code here
        sort(str.begin(), str.end());
        int i = 0, sum = 0;
        while (i < str.size()) {
            if (isdigit(str[i])) {
                sum += str[i] - '0';
            }
            else {
                break;
            }
            ++i;
        }
        
        string result, num;
        if (i != 0) {
            num = to_string(sum);
        }
        while (i < str.size()) {
            result += str[i++];
        }
        return result + num;
    }
};
