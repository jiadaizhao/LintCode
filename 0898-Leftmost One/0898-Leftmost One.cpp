class Solution {
public:
    /**
     * @param arr: The 2-dimension array
     * @return: Return the column the leftmost one is located
     */
    int getColumn(vector<vector<int>> &arr) {
        // Write your code here
        int m = arr.size();
        int n = arr[0].size();
        int left = n;
        for (int i = 0; i < m; ++i) {
            int start = 0, end = n - 1;
            while (start < end) {
                int mid = start + (end - start) / 2;
                if (arr[i][mid]) {
                    end = mid;
                }
                else {
                    start = mid + 1;
                }
            }
            if (arr[i][start]) {
                left = min(left, start);
            } 
        }
        return left;
    }
};

class Solution {
public:
    /**
     * @param arr: The 2-dimension array
     * @return: Return the column the leftmost one is located
     */
    int getColumn(vector<vector<int>> &arr) {
        // Write your code here
        int m = arr.size();
        int n = arr[0].size();
        int left = n;
        for (int j = 0; j < n; ++j) {
            if (arr[0][j]) {
                left = j;
                break;
            }
        }
        
        for (int i = 1; i < m; ++i) {
            if (arr[i][left] == 0) {
                continue;
            }
            while (left > 0 && arr[i][left - 1] == 1) {
                --left;
            }
        }
        return left;
    }
};
