class Solution {
public:
    /**
     * @param logs: the logs
     * @return: the log after sorting
     */
    vector<string> logSort(vector<string> &logs) {
        // Write your code here
        vector<Node> nodes;
        for (int i = 0; i < logs.size(); ++i) {
            int j = 0;
            while (logs[i][j] != ' ') ++j;
            int type = 0; 
            if (isdigit(logs[i][j + 1])) {
                type = 1;
            }
            nodes.emplace_back(logs[i].substr(0, j), logs[i].substr(j + 1), i, type);
        }
        sort(nodes.begin(), nodes.end());
        vector<string> result(logs.size());
        for (int i = 0; i < nodes.size(); ++i) {
            result[i] = nodes[i].id + " " + nodes[i].content;
        }
        return result;
    }
    
private:
    struct Node {
        string id;
        string content;
        int index;
        int type;
        Node(string d, string c, int i, int t): id(d), content(c), index(i), type(t){}
        bool operator < (const Node& node) const {
            if (type == 0 && node.type == 0) {
                if (content == node.content) {
                    return id < node.id;
                }
                else {
                    return content < node.content;
                }
            }
            else if (type == 1 && node.type == 1) {
                return index < node.index;
            }
            else {
                return type < node.type;
            }
        }
    };
};
