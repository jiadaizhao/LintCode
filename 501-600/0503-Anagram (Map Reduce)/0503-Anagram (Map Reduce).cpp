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
 */
class AnagramMapper: public Mapper {
public:
    void Map(Input<string>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, string& value);
        while (!input->done()) {
            stringstream ss(input->value());
            string s;
            while (getline(ss, s, ' ')) {
                if (s.size()) {
                    string key(s);
                    sort(key.begin(), key.end());
                    output(key, s);
                }
            }
            input->next();
        }
    }
};


class AnagramReducer: public Reducer {
public:
    void Reduce(string &key, Input<string>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, vector<string>& value);
        vector<string> values;
        while (!input->done()) {
            values.push_back(input->value());
            input->next();
        }
        output(key, values);
    }
};
