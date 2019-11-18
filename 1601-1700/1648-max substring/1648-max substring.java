public class Solution {
    /**
     * @param s: the matrix
     * @return: the last substring of s in lexicographical order
     */
    public String maxSubstring(String s) {
        // Write your code here.
        char[] str = s.toCharArray();
        char cMax = 'a';
        int N = str.length;
        ArrayList<Integer> candidates = new ArrayList<Integer>();
        for (int i = 0; i < str.length; ++i) {
            if (str[i] > cMax) {
                candidates.clear();
                candidates.add(i);
                cMax = str[i];
            }
            else if (str[i] == cMax) {
                candidates.add(i);
            }
        } 
        
        int maxStart = candidates.get(0);
        
        for (int i = 1, len = candidates.size(); i < len; ++i) {
            int start = candidates.get(i);
            
            for (int j = 1; j < N - start; ++j) {
                if (str[maxStart + j] > str[start + j]) {
                    break;
                }
                
                if (str[maxStart + j] < str[start + j]) {
                    maxStart = start;
                    break;
                }
            } 
            
            while (i + 1 < len && candidates.get(i + 1) - candidates.get(i) == 1) {
                ++i;
            }
        } 
        return s.substring(maxStart);
    }
}
