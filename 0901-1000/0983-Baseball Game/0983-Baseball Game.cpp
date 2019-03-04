class Solution {
public:
    /**
     * @param ops: the list of operations
     * @return:  the sum of the points you could get in all the rounds
     */
    int calPoints(vector<string> &ops) {
        // Write your code here
        vector<int> St;
        for (string op : ops) {
            if (op == "+") {
                int p1 = St[St.size() - 2];
                int p2 = St.back();
                St.push_back(p1 + p2);
            }
            else if (op == "D") {
                int p = St.back();
                St.push_back(p * 2);
            }
            else if (op == "C") {
                St.pop_back();
            }
            else {
                St.push_back(stoi(op));
            }
        }
        
        int sum = 0;
        for (int p : St) {
            sum += p;
        }
        
        return sum;
    }
};
