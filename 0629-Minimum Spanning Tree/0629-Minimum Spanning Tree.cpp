/**
 * Definition for a Connection.
 * class Connection {
 * public:
 *   string city1, city2;
 *   int cost;
 *   Connection(string& city1, string& city2, int cost) {
 *       this->city1 = city1;
 *       this->city2 = city2;
 *       this->cost = cost;
 * }
 */
class Solution {
public:
    /**
     * @param connections given a list of connections include two cities and cost
     * @return a list of connections from results
     */
    vector<Connection> lowestCost(vector<Connection>& connections) {
        // Write your code here
        for (Connection& c : connections) {
            parent[c.city1] = c.city1;
            parent[c.city2] = c.city2;
            
        }
        
        int count = parent.size();

        sort(connections.begin(), connections.end(), cmp());
        
        vector<Connection> result;
        int num = 0;
        
        for (auto& c : connections) {
            string c1 = c.city1;
            string c2 = c.city2;
            string c1p = findParent(c1);
            string c2p = findParent(c2);
            if (c1p != c2p) {
                parent[c1p] = c2p;
                result.push_back(c);
                ++num;
                if (num == count - 1) {
                    return result;
                }
            }
        }
        
        return {};
    }
    
private:
    unordered_map<string, string> parent;
    struct cmp {
        bool operator() (Connection c1, Connection c2) {
            if (c1.cost == c2.cost) {
                if (c1.city1 == c2.city1) {
                    return c1.city2 < c2.city2;
                }
                else {
                    return c1.city1 < c2.city1;
                }
            }
            else {
                return c1.cost < c2.cost;
            }
        }
    };
    
    string findParent(string s) {
        while (parent[s] != s) {
            parent[s] = parent[parent[s]];
            s = parent[s];
        }
        
        return s;
    }
};
