class Solution {
public:
    /**
      * @param start, a string
      * @param end, a string
      * @param dict, a set of string
      * @return a list of lists of string
      */
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        // write your code here
        vector<vector<string>> result;
        if (start.size() == 0)
        {
            return result;
        }
        
        dict.insert(end);

        if (bfs(start, end, dict))
        {
            vector<string> path;
            path.push_back(start);
            dfs(start, end, path, result);
        }
        return result;
    }
private:
    unordered_map<string, vector<string>> nextWord;
    unordered_map<string, int> distance;
    bool bfs(string start, string end, unordered_set<string> &dict)
    {
        queue<string> Q;
        Q.push(start);
        distance[start] = 0;
        int step = 0;
        bool done = false;
        while (!Q.empty())
        {
            int qs = Q.size();
            ++step;
            for (int i = 0; i < qs; ++i)
            {
                string s = Q.front();
                Q.pop();
                if (s == end)
                {
                    return true;
                }
                vector<string> snext;
                for (int j = 0; j < start.size(); ++j)
                {
                    string word(s);
                    for (char c = 'a'; c <= 'z'; ++c)
                    {
                        word[j] = c;
                        if (c == s[j] || dict.find(word) == dict.end())
                        {
                            continue;
                        }
                        if (distance.find(word) == distance.end())
                        {
                            Q.push(word);
                            distance[word] = step;
                        }
                        snext.push_back(word);
                    }
                }
                nextWord[s] = snext;
            }
        }
        
        return done;
    }
    
    void dfs(string start, string end, vector<string>& path, vector<vector<string>>& result)
    {
        if (start == end)
        {
            result.push_back(path);
            return;
        }
        
        vector<string>& nw = nextWord[start];
        for (string s : nw)
        {
            if (distance[s] == distance[start] + 1)
            {
                path.push_back(s);
                dfs(s, end, path, result);
                path.pop_back();
            }
        }
    }
};
