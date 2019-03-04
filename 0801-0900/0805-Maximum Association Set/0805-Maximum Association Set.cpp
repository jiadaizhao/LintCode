class Solution {
public:
    /**
     * @param ListA: The relation between ListB's books
     * @param ListB: The relation between ListA's books
     * @return: The answer
     */
    vector<string> maximumAssociationSet(vector<string> &ListA, vector<string> &ListB) {
        // Write your code here
        unordered_map<string, string> parent;
        for (int i = 0; i < ListA.size(); ++i) {
            string p1, p2;
            if (!parent.count(ListA[i])) {
                p1 = parent[ListA[i]] = ListA[i];
            }
            else {
                p1 = findParent(parent, ListA[i]);
            }
            
            if (!parent.count(ListB[i])) {
                p2 = parent[ListB[i]] = ListB[i];
            }
            else {
                p2 = findParent(parent, ListB[i]);
            }
            if (p1 != p2) {
                parent[p2] = p1;
            }
        }
        
        unordered_map<string, vector<string>> table;
        for (auto p : parent) {
            table[findParent(parent, p.first)].push_back(p.first);
        }
        
        int maxSize = 0;
        string key;
        for (auto t : table) {
            if (t.second.size() > maxSize) {
                maxSize = t.second.size();
                key = t.first;
            }
        }
        return table[key];
    }
    
private:
    string findParent(unordered_map<string, string>& parent, string s) {
        while (parent[s] != s) {
            parent[s] = parent[parent[s]];
            s = parent[s];
        }
        return s;
    } 
};
