class Solution {
public:
    /**
     * @param n: the number of disks
     * @return: the order of moves
     */
    vector<string> towerOfHanoi(int n) {
        // write your code here
        vector<string> result;
    	string a = "A", b = "B", c = "C";
    	move(a, b, c, n, result);
    	return result;
    }

private:
    void move(string a, string b, string c, int num, vector<string>& result) {
    	if (num == 0) return;
    	move(a, c, b, num - 1, result);
    	result.push_back("from " + a + " to " + c);
    	move(b, a, c, num - 1, result);
    }

};
