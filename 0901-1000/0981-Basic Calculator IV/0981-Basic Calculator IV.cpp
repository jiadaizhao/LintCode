class Solution {
public:
    /**
     * @param expression: the given expression
     * @param evalvars: the key of the evaluation map
     * @param evalints: the value of the evaluation map
     * @return: a list of tokens representing the simplified expression
     */
    vector<string> basicCalculatorIV(string &expression, vector<string> &evalvars, vector<int> &evalints) {
        // Write your code here
        unordered_map<string, int> mp;
        int n = evalvars.size();
        // create a map for variable value pairs
        for (int i = 0; i < n; ++i) mp[evalvars[i]] = evalints[i];
        // helper function is recursion using implicit stack
        int pos = 0;
        unordered_map<string, int> output = helper(expression, mp, pos);
        vector<pair<string, int>> ans(output.begin(), output.end());
        // sort result based on variable degree
        sort(ans.begin(), ans.end(), mycompare);
        vector<string> res;
        for (auto& p: ans) {
            // only consider non-zero coefficient variables
            if (p.second == 0) continue;
            res.push_back(to_string(p.second));
            if (p.first != "") res.back() += "*"+p.first;
        }
        return res;
    }
    
private:
    unordered_map<string, int> helper(string& s, unordered_map<string, int>& mp, int& pos) {
        // every operand is an unordered_map, including single variable or nested (a * b + a * c); 
        // if the operand is a number, use pair("", number)
        vector<unordered_map<string, int>> operands;
        vector<char> ops;
        ops.push_back('+');
        int n = s.size();
        while (pos < n && s[pos] != ')') {
            if (s[pos] == '(') {
               pos++;
               operands.push_back(helper(s, mp, pos));
            }
            else {
               int k = pos;
               while (pos < n && s[pos] != ' ' && s[pos] != ')') pos++;
               string t = s.substr(k, pos-k);
               bool isNum = true;
               for (char c: t) {
                   if (!isdigit(c)) isNum = false;
               }
               unordered_map<string, int> tmp;
               if (isNum) 
                   tmp[""] = stoi(t);
               else if (mp.count(t)) 
                   tmp[""] = mp[t];
               else              
                   tmp[t] = 1;
               operands.push_back(tmp);
            }
            if (pos < n && s[pos] == ' ') {
               ops.push_back(s[++pos]);
               pos += 2;
            }
        }
        pos++;
        return calculate(operands, ops);
    }
    unordered_map<string, int> calculate(vector<unordered_map<string, int>>& operands, vector<char>& ops) {
        unordered_map<string, int> ans;
        int n = ops.size();
        for (int i = n-1; i >= 0; --i) {
            unordered_map<string, int> tmp = operands[i];
            while (i >= 0 && ops[i] == '*')
                tmp = multi(tmp, operands[--i]);
            int sign = ops[i] == '+'? 1: -1;
            for (auto& p: tmp) ans[p.first] += sign*p.second;
        }
        return ans;
    }
    unordered_map<string, int> multi(unordered_map<string, int>& lhs, unordered_map<string, int>& rhs) {
        unordered_map<string, int> ans;
        int m = lhs.size(), n = rhs.size();
        for (auto& p: lhs) {
            for (auto& q: rhs) {
                // combine and sort the product of variables
                string t = combine(p.first, q.first);
                ans[t] += p.second*q.second;
            }
        }
        return ans;
    }
    string combine(const string& a, const string& b) {
        if (a == "") return b;
        if (b == "") return a;
        vector<string> strs = split(a, '*');
        for (auto& s: split(b, '*')) strs.push_back(s);
        sort(strs.begin(), strs.end());
        string s;
        for (auto& t: strs) s += t +'*';
        s.pop_back();
        return s;
    }
    static vector<string> split(const string& s, char c) {
        vector<string> ans;
        int i = 0, n = s.size();
        while (i < n) {
            int j = i;
            i = s.find(c, i);
            if (i == -1) i = n;
            ans.push_back(s.substr(j, i-j));
            i++;
        }
        return ans;
    }
    static bool mycompare(pair<string, int>& a, pair<string, int>& b) {
        string s1 = a.first, s2 = b.first;
        vector<string> left = split(s1, '*'); 
        vector<string> right = split(s2, '*');
        return left.size() > right.size() || (left.size() == right.size() && left < right);
    }
};
