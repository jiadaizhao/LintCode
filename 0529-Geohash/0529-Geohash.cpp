class GeoHash {
public:
    /**
     * @param latitude, longitude a location coordinate pair
     * @param precision an integer between 1 to 12
     * @return a base32 string
     */
    string encode(double latitude, double longitude, int precision) {
        // Write your code here
        int count1 = (precision * 5 + 1) / 2;
        int count2 = (precision * 5) / 2;
        string num(precision * 5, ' ');
        encode(longitude, -180, 180, count1, num, 0);
        encode(latitude, -90, 90, count2, num, 1);
        
        return numToStr(num);
    }
    
private:
    void encode(double val, double start, double end, int count, string& num, int head)
    {
        while (count--)
        {
            double mid = (start + end) / 2;
            if (val > mid)
            {
                num[head] = '1';
                start = mid;
            }
            else
            {
                num[head] = '0';
                end = mid;
            }
            head += 2;
        }
    }
    
    string numToStr(string num)
    {
        string result;
        string dict = "0123456789bcdefghjkmnpqrstuvwxyz";
        for (int i = 0; i < num.size(); i += 5)
        {
            int val = 0;
            for (int j = 0; j < 5; ++j)
            {
                val = val * 2 + (num[i + j] - '0');
            }
            result += dict[val];
        }
        
        return result;
    }
};
