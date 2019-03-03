class Solution {
public:
    /**
      * @param start, a string
      * @param end, a string
      * @param dict, a set of string
      * @return an integer
      */
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // write your code here
        dict.insert(end);
        queue<string> Q;
        unordered_set<string> visited;
        Q.push(start);
        int step = 0;
        while (!Q.empty())
        {
            ++step;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i)
            {
                string str = Q.front();
                if (str == end)
                {
                    return step;
                }
                Q.pop();
                for (int j = 0; j < str.size(); ++j)
                {
                    string word(str);
                    for (char c = 'a'; c <= 'z'; ++c)
                    {
                        if (c == str[j])
                        {
                            continue;
                        }
                        word[j] = c;
                        if (dict.find(word) == dict.end())
                        {
                            continue;
                        }
                        
                        if (visited.find(word) == visited.end())
                        {
                            Q.push(word);
                            visited.insert(word);
                        }
                    }
                }
            }
        }
        
        return 0;
        
    }
};
