// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf destination buffer
     * @param n maximum number of characters to read
     * @return the number of characters read
     */
    int read(char *buf, int n) {
        // Write your code here
        int i = 0;
        while (i < n) {
            if (i4 == n4) {
                i4 = 0;
                n4 = read4(buf4);
                if (n4 == 0) {
                    break;
                }
            }
            buf[i++] = buf4[i4++];
        }
        
        return i;
    }
    
private:
    char buf4[4];
    int i4 = 0, n4 = 0;
};
