class Solution {
public:
    /**
     * @param sweetness: an integer array
     * @param K: an integer
     * @return:  return the maximum total sweetness of the piece
     */
    int maximizeSweetness(vector<int> &sweetness, int K) {
        // write your code here
        int low = 0, high = accumulate(sweetness.begin(), sweetness.end(), 0) / (K + 1);
        while (low < high) {
            int mid = (low + high + 1) / 2;
            int count = 0, curr = 0;
            for (int s : sweetness) {
                curr += s;
                if (curr >= mid) {
                    if (++count >= K + 1) {
                        break;
                    }
                    curr = 0;
                }
            }
            
            if (count >= K + 1) {
                low = mid;
            }
            else {
                high = mid - 1;
            }
        }
        
        return low;
    }
};
