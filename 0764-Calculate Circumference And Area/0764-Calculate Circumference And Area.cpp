class Solution {
public:
    /**
     * @param r: a Integer represent radius
     * @return: the circle's circumference nums[0] and area nums[1]
     */
    vector<double> calculate(int r) {
        // write your code here
        double PI = 3.14;
        return {2 * PI * r, PI * r * r};
    }
};
