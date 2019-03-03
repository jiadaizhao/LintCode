class Solution {
public:
    /**
     * @param A an integer array
     * @return a long integer
     */
    long long permutationIndexII(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0)
        {
            return 0;
        }
        
        long long index = 1;
        long long factor = 1;
        for (int i = n - 2; i >= 0; --i)
        {
            int rank = 0;
            unordered_map<int, int> table;
            ++table[A[i]];
            for (int j = i + 1; j < n; ++j)
            {
                ++table[A[j]];
                if (A[j] < A[i])
                {
                    ++rank;
                }
            }
            
            index += rank * factor / divisor(table);
            factor *= (n - i);
        }
        
        return index;
    }
private:
    long long divisor(unordered_map<int, int>& table)
    {
        long long result = 1;
        for (auto it = table.begin(); it != table.end(); ++it)
        {
            result *= fac(it->second);
        }
        
        return result;
    }
    
    long long fac(int n)
    {
        long long result = 1;
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
        
        return result;
    }
};
