// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    /**
     * @param n a party with n people
     * @return the celebrity's label or -1
     */
    int findCelebrity(int n) {
        // Write your code here
        int candidate = 0;
        for (int i = 1; i < n; ++i) {
            if (knows(candidate, i)) {
                candidate = i;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (i != candidate && (!knows(i, candidate) || knows(candidate, i))) {
                return -1;
            }
        }

        return candidate;
    }
};
