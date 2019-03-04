class StringUtils {
public:
    /**
     * @param originalStr the string we want to append to
     * @param size the target length of the string
     * @param padChar the character to pad to the left side of the string
     * @return a string
     */
    static string leftPad(string& originalStr, int size, char padChar=' ') {
        // Write your code here
        int padSize = size - originalStr.size();
        if (padSize <= 0)
        {
            return originalStr;
        }
        
        return string(padSize, padChar) + originalStr;
    }
};
