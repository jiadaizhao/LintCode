class Solution {
public:
    /**
     * @param strs: a list of string
     * @return: return a string
     */
    string splitLoopedString(vector<string> &strs) {
        // write your code here
        int n = strs.size();
        if (n == 0) {
            return  "";
        }
        vector<string> revs(n);
        for (int i = 0; i < n; ++i) {
            string rev(strs[i]);
            reverse(rev.begin(), rev.end());
            if (rev > strs[i]) {
                revs[i] = rev;
            }
            else {
                revs[i] = strs[i];
                strs[i] = rev;
            }
        }
        
        string result;
        for (int i = 0; i < n; ++i) {
            for (string str : {strs[i], revs[i]}) {
                for (int j = 0; j < str.size(); ++j) {
                    if (result.size() && str[j] < result[0]) {
                        continue;
                    }
                    string curr = str.substr(j);
                    for (int k = i + 1; k < n; ++k) {
                        curr += revs[k];
                    }
                    
                    for (int k = 0; k < i; ++k) {
                        curr += revs[k];
                    }
                    
                    curr += str.substr(0, j);
                    if (curr > result) {
                        result = curr;
                    }
                }
                
            }            
        }
        
        return result;
    }
};
