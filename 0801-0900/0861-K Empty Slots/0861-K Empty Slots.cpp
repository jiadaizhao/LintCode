class Solution {
public:
    /**
     * @param flowers: the place where the flower will open in that day
     * @param k:  an integer
     * @return: in which day meet the requirements
     */
    int kEmptySlots(vector<int> &flowers, int k) {
        // Write your code here
        int N = flowers.size();
        vector<int> days(N);
        for (int i = 0; i < N; ++i) {
            days[flowers[i] - 1] = i + 1;
        }
        
        int left = 0, right = k + 1;
        int result = INT_MAX;
        for (int i = 0; i < N; ++i) {
            if (days[i] < days[left] || days[i] <= days[right]) {
                if (i == right) {
                    result = min(result, max(days[left], days[right]));
                }
                left = i;
                right = i + k + 1;
            }
        }
        
        return result == INT_MAX ? -1 : result;
    }
};
