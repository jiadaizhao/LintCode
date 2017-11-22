class Solution {
public:
    /*
     * @param : the number
     * @return: the number in words
     */
    string convertWords(int number) {
        // Write your code here
        if (number == 0) {
            return "zero";
        }
        
        return numToString(number).substr(1);
    }
    
    static vector<string> below_100;
    static vector<string> below_20;
private:
    string numToString(int number) {
        if (number >= 1000000000) {
            return numToString(number / 1000000000) + " billion" + numToString(number % 1000000000);
        }
        else if (number >= 1000000) {
            return numToString(number / 1000000) + " million" + numToString(number % 1000000);
        }
        else if (number >= 1000) {
            return numToString(number / 1000) + " thousand" + numToString(number % 1000);
        }
        else if (number >= 100) {
            return numToString(number / 100) + " hundred" + numToString(number % 100);
        }
        else if (number >= 20) {
            return " " + below_100[number / 10 - 2] + numToString(number % 10);
        }
        else if (number >= 1) {
            return " " + below_20[number - 1];
        }
        else {
            return "";
        }
    }
};

vector<string> Solution::below_100 = {"twenty", "thirty", "forty", "fifty", "sixty", 
            "seventy", "eighty", "ninety"};
            
vector<string> Solution::below_20 = {"one", "two", "three", "four", "five", "six", 
            "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
            "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
