class TinyUrl {
public:
    /**
     * @param url a long url
     * @return a short url starts with http://tiny.url/
     */
    string longToShort(string& url) {
        // Write your code here
        if (url2id.find(url) != url2id.end())
        {
            return tiny_url + id2ShortUrl(url2id[url]);
        }

        id2url[currId] = url;
        url2id[url] = currId;

        return tiny_url + id2ShortUrl(currId++);
    }

    /**
     * @param url a short url starts with http://tiny.url/
     * @return a long url
     */
    string shortToLong(string& url) {
        // Write your code here
        int id = 0;
        for (int i = url.size() - 6; i <= url.size() - 1; ++i)
        {
            id = id * 62 + seed.find(url[i]);
        }

        return id2url[id];
    }
    
private:
    unordered_map<int, string> id2url;
    unordered_map<string, int> url2id;
    static int currId;
    static string seed;
    static string tiny_url;
    string id2ShortUrl(int id)
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
};

int TinyUrl::currId = 0;
string TinyUrl::seed = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string TinyUrl::tiny_url = "http://tiny.url/";
