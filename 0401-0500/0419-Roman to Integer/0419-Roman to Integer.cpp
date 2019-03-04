class Solution {
public:
    /**
     * @param s Roman representation
     * @return an integer
     */
    int romanToInt(string& s) {
        // Write your code here
        int result = 0, prev = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int curr = romanMap(s[i]);
            if (i == 0 || curr <= prev)
            {
                result += curr;
            }
            else
            {
                result += curr - 2 * prev;
            }
            prev = curr;
        }
        
        return result;
    }
    
private:
    int romanMap(char c) {
        switch (c)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default  : return 0;
        }
    }
};
