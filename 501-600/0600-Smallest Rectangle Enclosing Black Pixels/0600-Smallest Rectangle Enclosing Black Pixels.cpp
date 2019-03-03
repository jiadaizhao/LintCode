class Solution {
public:
    /**
     * @param image a binary matrix with '0' and '1'
     * @param x, y the location of one of the black pixels
     * @return an integer
     */
    int minArea(vector<vector<char>>& image, int x, int y) {
        // Write your code here
        int m = image.size();
        int n = image[0].size();
        int left = position(image, 0, y, true, true);
        int right = position(image, y, n - 1, true, false);
        int up = position(image, 0, x, false, true);
        int down = position(image, x, m - 1, false, false);
        return (right - left + 1) * (down - up + 1);
    }
    
private:
    int position(vector<vector<char>>& image, int start, int end, bool horizontal, bool leftmost) {
        if (leftmost) {
            while (start + 1 < end) {
                int mid = start + (end - start) / 2;
                if (hasBlack(image, mid, horizontal)) {
                    end = mid;
                }
                else {
                    start = mid + 1;
                }
            }
            
            if (hasBlack(image, start, horizontal)) {
                return start;
            }
            else {
                return end;
            }
        }
        else {
            while (start + 1 < end) {
                int mid = start + (end - start) / 2;
                if (hasBlack(image, mid, horizontal)) {
                    start = mid;
                }
                else {
                    end = mid - 1;
                }
            }
            
            if (hasBlack(image, end, horizontal)) {
                return end;
            }
            else {
                return start;
            }
        }
    }
    
    bool hasBlack(vector<vector<char>>& image, int pos, bool horizontal)
    {
        if (horizontal) {
            for (int i = 0; i < image.size(); ++i) {
                if (image[i][pos] == '1') {
                    return true;
                }
            }
        }
        else {
            for (int j = 0; j < image[pos].size(); ++j) {
                if (image[pos][j] == '1') {
                    return true;
                }
            }
        }
        
        return false;
    }    
};
