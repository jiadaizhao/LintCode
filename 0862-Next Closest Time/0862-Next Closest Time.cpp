class Solution {
public:
    /**
     * @param time: the given time
     * @return: the next closest time
     */
    string nextClosestTime(string &time) {
        // write your code here
        int curr = stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3, 2));
        unordered_set<int> allowed;
        allowed.insert(time[0] - '0');
        allowed.insert(time[1] - '0');
        allowed.insert(time[3] - '0');
        allowed.insert(time[4] - '0');
        int minDiff = 1440;
        int minNext = curr;
        for (int h1 : allowed) {
            for (int h2 : allowed) {
                if (h1 * 10 + h2 < 24) {
                    for (int m1 : allowed) {
                        for (int m2 : allowed) {
                            if (m1 * 10 + m2 < 60) {
                                int next = (h1 * 10 + h2) * 60 + m1 * 10 + m2;
                                int diff = (next - curr + 1440) % 1440;
                                if (diff != 0 && diff < minDiff) {
                                    minDiff = diff;
                                    minNext = next;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        string hour = to_string(minNext / 60);
        if (hour.size() < 2) {
            hour = "0" + hour;
        }
        string min = to_string(minNext % 60);
        if (min.size() < 2) {
            min = "0" + min;
        }
        
        return hour + ":" + min;
    }
};
