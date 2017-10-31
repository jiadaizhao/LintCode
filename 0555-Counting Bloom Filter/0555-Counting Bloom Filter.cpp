class HashFunction {
private:
    int cap, seed;
public:
    HashFunction(int cap, int seed) {
        this->cap = cap;
        this->seed = seed;
    }

    int hash(string& value) {
        int ret = 0;
        int n = value.size();
        for (int i = 0; i < n; ++i) {
            ret += seed * ret + value[i];
            ret %= cap;
        }
        return ret;
    }
};

class CountingBloomFilter {
public:
    CountingBloomFilter(int k) {
        // initialize your data structure here
        this->k = k;
        for (int i = 0; i < k; ++i) {
            hashFunc.push_back(new HashFunction(100000 + i, 2 * i + 3));
        }
        bits.resize(100000 + k);
    }

    void add(string& word) {
        // Write your code here
        for (int i = 0; i < k; ++i) {
            int position = hashFunc[i]->hash(word);
            ++bits[position];
        }
    }

    void remove(string& word) {
        // Write your code here
        for (int i = 0; i < k; ++i) {
            int position = hashFunc[i]->hash(word);
            --bits[position];
        }
    }
    bool contains(string& word) {
        // Write your code here
        for (int i = 0; i < k; ++i) {
            int position = hashFunc[i]->hash(word);
            if (bits[position] <= 0) {
                return false;
            }
        }
        return true;
    }
    
private:
    int k;
    vector<HashFunction*> hashFunc;
    vector<int> bits;
};
