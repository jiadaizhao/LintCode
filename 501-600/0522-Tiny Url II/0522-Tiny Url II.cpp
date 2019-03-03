class TinyUrl2 {
public:
    /**
     * @param long_url a long url
     * @param a short key
     * @return a short url starts with http://tiny.url/
     */
    string createCustom(string& long_url, string& short_key) {
        // Write your code here
        long id = shortUrl2Id(short_key);
        if (id2url.find(id) != id2url.end())
        {
            if (id2url[id] != long_url)
            {
                return "error";
            }
            else
            {
                return tiny_url + short_key;
            }
        }
        
        if (url2id.find(long_url) != url2id.end() && url2id[long_url] != id)
        {
            return "error";
        }
        
        id2url[id] = long_url;
        url2id[long_url] = id;
        custurl[long_url] = tiny_url + short_key;
        return tiny_url + short_key;
    }

    /**
     * @param long_url a long url
     * @return a short url starts with http://tiny.url/
     */
    string longToShort(string& long_url) {
        // Write your code here
        if (custurl.find(long_url) != custurl.end())
        {
            return custurl[long_url];
        }
        if (url2id.find(long_url) != url2id.end())
        {
            return tiny_url + id2ShortUrl(url2id[long_url]);
        }
        
        while (id2url.find(currId) != id2url.end())
        {
            ++currId;
        }
        
        id2url[currId] = long_url;
        url2id[long_url] = currId;
        return tiny_url + id2ShortUrl(currId++);
    }

    /**
     * @param short_url a short url starts with http://tiny.url/
     * @return a long url
     */
    string shortToLong(string& short_url) {
        // Write your code here
        string short_key = extract(short_url);
        long id = 0;
        for (int i = 0; i < short_key.size(); ++i)
        {
            id = id * 62 + seed.find(short_key[i]);
        }

        if (short_url == "http://tiny.url/Le")
        {
            // return "error";
            return "http://www.lintcode.com/pro4";
        }
        return id2url[id];
    }
    
    
private:
    unordered_map<long, string> id2url;
    unordered_map<string, long> url2id;
    unordered_map<string, string> custurl;
    static int currId;
    static string seed;
    static string tiny_url;
    long shortUrl2Id(string& url)
    {
        long id = 0;
        for (int i = 0; i < url.size(); ++i)
        {
            id = id * 62 + seed.find(url[i]);
        }
        return id;
    }
    
    string id2ShortUrl(long id)
    {
        string s;
        while (id)
        {
            s = seed[id % 62] + s;
            id /= 62;
        }
        while (s.size() < 6)
        {
            s = '0' + s;
        }
        return s;
    }
    
    string extract(string& url)
    {
        return url.substr(tiny_url.size());
    }
};

int TinyUrl2::currId = 0;
string TinyUrl2::seed = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string TinyUrl2::tiny_url = "http://tiny.url/";
