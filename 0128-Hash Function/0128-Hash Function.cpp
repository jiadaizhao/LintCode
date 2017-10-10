class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
    int hashCode(string key,int HASH_SIZE) {
        // write your code here
        int m = key.size();
        long result = 0;
        for (int i = 0; i < m; ++i)
        {
            result = (result * 33 + key[i]) % HASH_SIZE;
        }
        return result;
    }
};
