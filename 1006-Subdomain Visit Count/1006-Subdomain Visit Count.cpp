class Solution {
public:
    /**
     * @param cpdomains: a list cpdomains of count-paired domains
     * @return: a list of count-paired domains
     */
    vector<string> subdomainVisits(vector<string> &cpdomains) {
        // Write your code here
        vector<string> result;
        unordered_map<string, int> table;
        for (string cpdomain : cpdomains) {
            int index = cpdomain.find(' ');
            int num = stoi(cpdomain.substr(0, index));
            string str = cpdomain.substr(index + 1);
            for (int i = str.size() - 1; i > 0; --i) {
                if (str[i] == '.') {
                    table[str.substr(i + 1)] += num;
                }                
            }
            table[str] += num;
        }
        
        for (auto t : table) {
            result.push_back(to_string(t.second) + " " + t.first);
        }
        return result;
    }
};
