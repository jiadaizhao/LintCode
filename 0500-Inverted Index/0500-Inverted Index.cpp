/**
 * Definition of Document:
 * class Document {
 * public:
 *     int id;
 *     string content;
 * }
 */
class Solution {
public:
    /**
     * @param docs a list of documents
     * @return an inverted index
     */
    map<string, vector<int>> invertedIndex(vector<Document>& docs) {
        // Write your code here
        map<string, vector<int>> table;
        for (Document doc : docs)
        {
            int id = doc.id;
            string s;
            stringstream ss(doc.content);
            while (getline(ss, s, ' '))
            {
                if (s.size() && (table[s].size() == 0 || table[s].back() != id))
                {
                    table[s].push_back(id);
                }
            }
        }
        
        return table;
    }
};
