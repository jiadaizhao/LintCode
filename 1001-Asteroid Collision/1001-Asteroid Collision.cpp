class Solution {
public:
    /**
     * @param asteroids: a list of integers
     * @return: return a list of integers
     */
    vector<int> asteroidCollision(vector<int> &asteroids) {
        // write your code here
        vector<int> St;
        for (int a : asteroids) {
            while (!St.empty() && St.back() > 0 && St.back() < -a) {
                St.pop_back();
            }
            
            if (St.empty() || St.back() < 0 || a > 0) {
                St.push_back(a);
            }
            else if (St.back() == -a) {
                St.pop_back();
            }
        }
        
        return St;
    }
};
