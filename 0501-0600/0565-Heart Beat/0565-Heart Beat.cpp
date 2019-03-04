class HeartBeat {
public:

    HeartBeat() {
        // initialize your data structure here.
    }

    // @param slaves_ip_list a list of slaves'ip addresses
    // @param k an integer
    // @return void
    void initialize(vector<string>& slaves_ip_list, int k) {
        // Write your code here
        this->k = k;
        for (string ip : slaves_ip_list) {
            pingTimeTable[ip] = 0;
        }
    }

    // @param timestamp current timestamp in seconds
    // @param slave_ip the ip address of the slave server
    // @return nothing
    void ping(int timestamp, string& slave_ip) {
        // Write your code here
        if (pingTimeTable.find(slave_ip) == pingTimeTable.end()) {
            return;
        }
        pingTimeTable[slave_ip] = timestamp;
    }

    // @param timestamp current timestamp in seconds
    // @return a list of slaves'ip addresses that died
    vector<string> getDiedSlaves(int timestamp) {
        // Write your code here
        vector<string> result;
        for (auto it = pingTimeTable.begin(); it != pingTimeTable.end(); ++it) {
            if (it->second <= timestamp - k * 2) {
                result.push_back(it->first);
            }
        }
        
        return result;
    }
    
private:
    int k;
    unordered_map<string, int> pingTimeTable;
};
