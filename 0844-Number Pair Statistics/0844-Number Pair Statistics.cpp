class Solution {
public:
    /**
     * @param p: the point List
     * @return: the numbers of pairs which meet the requirements
     */
    int pairNumbers(vector<Point> &p) {
        // Write your code here
        int n00 = 0, n01 = 0, n10 = 0, n11 = 0;
        for (auto point : p) {
            bool odd1 = point.x & 1;
            bool odd2 = point.y & 1;
            if (odd1) {
                if (odd2) {
                    ++n11;
                }
                else {
                    ++n10;
                }
            }
            else if (odd2) {
                ++n01;
            }
            else {
                ++n00;
            }
        }
        int sum = 0;
        sum += (n00 - 1) * n00 / 2;
        sum += (n01 - 1) * n01 / 2;
        sum += (n10 - 1) * n10 / 2;
        sum += (n11 - 1) * n11 / 2;
        return sum;
    }
};
