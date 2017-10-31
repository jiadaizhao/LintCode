/**
 * Definition of Input:
 * template<class T>
 * class Input {
 * public:
 *     bool done(); 
 *         // Returns true if the iteration has elements or false.
 *     void next();
 *         // Move to the next element in the iteration
 *         // Runtime error if the iteration has no more elements
 *     T value();
 *        // Get the current element, Runtime error if
 *        // the iteration has no more elements
 * }
 * Definition of Document:
 * class Document {
 * public:
 *     int id; // document id
 *     string content; // document content
 * }
 */
class TopKFrequentWordsMapper: public Mapper {
public:
    void Map(Input<Document>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, int value);
        while (!input->done()) {
            stringstream ss(input->value().content);
            string s;
            while (getline(ss, s, ' ')) {
                if (s.size()) {
                    output(s, 1);
                }
            }
            input->next();
        }
    }
};


class TopKFrequentWordsReducer: public Reducer {
public:
    void setUp(int k) {
        // initialize your data structure here
        this->k = k;
    }

    void Reduce(string &key, Input<int>* input) {
        // Write your code here
        int sum = 0;
        while (!input->done()) {
            sum += input->value();
            input->next();
        }
        
        Pair curr(key, sum);
        if (pq.size() < k) {
            pq.push(curr);
        } else if (curr < pq.top()) {
            pq.pop();
            pq.push(curr);
        }
    }

    void cleanUp() {
        // Please directly use func 'output' to output 
        // the top k pairs <word, times> into output buffer.
        // void output(string &key, int &value);
        vector<Pair> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        for (int i = result.size() - 1; i >= 0; --i) {
            output(result[i].key, result[i].count);
        }
    }
    
private:
    int k;
    struct Pair {
        string key;
        int count;
        Pair (string k, int c): key(k), count(c) {}
        bool operator < (const Pair &p2) const {
            if (this->count == p2.count) {
                return this->key < p2.key;
            }
            return this->count > p2.count;
        }
    };
    priority_queue<Pair> pq;
};
