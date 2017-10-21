class GeoHash {
public:
    /**
     * @param geohash a base32 string
     * @return latitude and longitude a location coordinate pair
     */
    vector<double> decode(string& geohash) {
        // Write your code here
        string dict = "0123456789bcdefghjkmnpqrstuvwxyz";
        string num;
        for (char c : geohash)
        {
            int val;
            if (isdigit(c))
            {
                val = c - '0';
            }
            else if (c >= 'b' && c <= 'h')
            {
                val = c - 'b' + 10;
            }
            else if (c >= 'j' && c <= 'k')
            {
                val = c - 'j' + 17;
            }
            else if (c >= 'm' && c <= 'n')
            {
                val = c - 'm' + 19;
            }
            else if (c >= 'p' && c <= 'z')
            {
                val = c - 'p' + 21;
            }
            
            string temp;
            while (temp.size() != 5)
            {
                temp += '0' + (val % 2);
                val /= 2;
            }

            reverse(temp.begin(), temp.end());
            num += temp;
        }
        
        vector<double> result(2);
        result[0] = translate(num, -90, 90, 1);
        result[1] = translate(num, -180, 180, 0);
        return result;
    }
    
private:
    double translate(string& num, double start, double end, int head)
    {
        for (int i = head; i < num.size(); i += 2)
        {
            double mid = (start + end) / 2;
            if (num[i] == '1')
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
        
        return (start + end) / 2;
    }
};
