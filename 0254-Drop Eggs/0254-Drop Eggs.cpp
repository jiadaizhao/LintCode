class Solution {
public:
    /**
     * @param n an integer
     * @return an integer
     */
    int dropEggs(int n) {
        // Write your code here
        long sum = 0;
        int i = 1;
        while (sum + i < n)
        {
            sum += i++;
        }
        
        return i;
    }
};
