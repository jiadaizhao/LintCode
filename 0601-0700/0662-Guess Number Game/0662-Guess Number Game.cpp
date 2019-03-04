// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    /**
     * @param n an integer
     * @return the number you guess
     */
    int guessNumber(int n) {
        // Write your code here
        int start = 1, end = n;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            int temp = guess(mid);
            if (temp < 0) {
                end = mid - 1;
            }
            else if (temp > 0) {
                start = mid + 1;
            }
            else {
                return mid;
            }
        }
        
        if (guess(start) == 0) {
            return start;
        }
        else {
            return end;
        }
    }
};
