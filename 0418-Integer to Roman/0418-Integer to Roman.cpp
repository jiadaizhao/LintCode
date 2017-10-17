class Solution {
public:
    /**
     * @param n The integer
     * @return Roman representation
     */
    string intToRoman(int n) {
        // Write your code here
        vector<int> radix = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbol = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string result;
        for (int i = 0; i < radix.size(); ++i)
        {
            int count = n / radix[i];
            while (count--)
            {
                result += symbol[i];
            }
            
            n = n % radix[i];
        }
        
        return result;
    }
};
