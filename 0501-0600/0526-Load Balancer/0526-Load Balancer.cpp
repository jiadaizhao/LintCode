class LoadBalancer {
public:
    LoadBalancer() {
        // Initialize your data structure here.
    }

    // @param server_id add a new server to the cluster 
    // @return void
    void add(int server_id) {
        // Write your code here
        int n = servers.size();
        servers.push_back(server_id);
        table[server_id] = n;
    }

    // @param server_id server_id remove a bad server from the cluster
    // @return void
    void remove(int server_id) {
        // Write your code here
        if (table.find(server_id) == table.end())
        {
            return;
        }
        
        int index = table[server_id];
        servers[index] = servers.back();
        table[servers[index]] = index;
        servers.pop_back();
        table.erase(server_id);
    }

    // @return pick a server in the cluster randomly with equal probability
    int pick() {
        // Write your code here
        int n = servers.size();
        int index = rand() % n;
        return servers[index];
    }
    
private:
    vector<int> servers;
    unordered_map<int, int> table;
};
