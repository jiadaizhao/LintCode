class Solution {
public:
    /**
    *@param n: Given a decimal number that is passed in as a string
    *@return: A string
    */
    string binaryRepresentation(string n) {
        // wirte your code here
        string result;
        long long intPart = 0;
        int i;
        for (i = 0; i < n.size() && n[i] != '.'; ++i)
        {
            intPart = intPart * 10 + n[i] - '0';
        }

        while (intPart)
        {
            result += '0' + (intPart & 1);
            intPart >>= 1;
        }

        if (result.size() == 0)
        {
            result = "0";
        }

        reverse(result.begin(), result.end());

        double decPart = atof(n.substr(i, n.size() - i).c_str());
        if (decPart == 0)
        {
            return result;
        }

        string dec;

        while (decPart)
        {
            if (dec.size() >= 32)
            {
                return "ERROR";
            }

            decPart *= 2;
            if (decPart == 1)
            {
                dec += '1';
                break;
            }
            else if (decPart > 1)
            {
                dec += '1';
                --decPart;
            }
            else
            {
                dec += '0';
            }
        }

        return result + '.' + dec;
    }
};
