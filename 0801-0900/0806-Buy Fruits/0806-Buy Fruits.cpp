class Solution {
public:
    /**
     * @param codeList: The codeList
     * @param shoppingCart: The shoppingCart
     * @return: The answer
     */
    int buyFruits(vector<vector<string>> &codeList, vector<string> &shoppingCart) {
        // Write your code here
        vector<string> code;
        for (auto l : codeList) {
            for (string s : l) {
                code.push_back(s);
            }
        }
        
        if (code.size() > shoppingCart.size()) return 0;
        for (int i = 0; i < shoppingCart.size() - code.size() + 1; ++i) {
            int j;
            for (j = 0; j < code.size(); ++j) {
                if (shoppingCart[i + j] != code[j] && code[j] != "anything") {
                    break;
                }
            }
            if (j == code.size()) return 1;
        }
        return 0;
    }
};
