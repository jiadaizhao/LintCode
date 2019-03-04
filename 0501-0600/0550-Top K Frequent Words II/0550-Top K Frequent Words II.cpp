unordered_map<string, int> counts;
struct cmp {
    bool operator() (const string& s1, const string& s2) const {
        int count1 = counts[s1];
        int count2 = counts[s2];
        if (count1 == count2) {
            return s1 < s2;
        }
        else {
            return count1 > count2;
        }
    }     
};

class TopK {
public:
    /*
    * @param k: An integer
    */
    TopK(int k) {
        // do intialization if necessary
        this->k = k;
    }

    /*
     * @param word: A string
     * @return: nothing
     */
    void add(string &word) {
        // write your code here
        if (counts.find(word) == counts.end()) {
            counts[word] = 1;
        }
        else {
            if (table.find(word) != table.end()) {
                table.erase(word);
            }
            ++counts[word];
        }
        table.insert(word);
    }

    /*
     * @return: the current top k frequent words.
     */
    vector<string> topk() {
        // write your code here
        vector<string> result;
        auto it = table.begin();
        for (int i = 0; i < k && it != table.end(); ++i, ++it) {
            result.push_back(*it);
        }
        return result;
    }
    
private:
    int k;
    set<string, cmp> table;
};
