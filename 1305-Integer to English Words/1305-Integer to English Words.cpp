vector<string> below_100 = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
vector<string> below_20 = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

class Solution {
public:
    /**
     * @param num: a non-negative integer
     * @return: english words representation
     */
    string numberToWords(int num) {
        // Write your code here
        if (num == 0) {
            return "Zero";
        }
        else {
            return numberToString(num).substr(1);
        }
    }
    
private:
    string numberToString(int num) {
        if (num >= 1000000000) {
            return numberToString(num / 1000000000) + " Billion" + numberToString(num % 1000000000);
        }
        else if (num >= 1000000) {
            return numberToString(num / 1000000) + " Million" + numberToString(num % 1000000);
        }
        else if (num >= 1000) {
            return numberToString(num / 1000) + " Thousand" + numberToString(num % 1000);
        }
        else if (num >= 100) {
            return numberToString(num / 100) + " Hundred" + numberToString(num % 100);
        }
        else if (num >= 20) {
            return " " + below_100[num / 10 - 2] + numberToString(num % 10);
        }
        else if (num >= 1) {
            return " " + below_20[num - 1];
        }
        else {
            return "";
        }
    }
};
