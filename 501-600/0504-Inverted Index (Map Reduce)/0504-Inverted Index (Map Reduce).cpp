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
class InvertedIndexMapper: public Mapper {
public:
    void Map(Input<Document>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, int value);
        while (!input->done()) {
            stringstream ss(input->value().content);
            string s;
            int id = input->value().id;
            while (getline(ss, s, ' ')) {
                if (s.size()) {
                    output(s, id);
                }
            }
            input->next();
        }
    }
};


class InvertedIndexReducer: public Reducer {
public:
    void Reduce(string &key, Input<int>* input) {
        // Write your code here
        // Please directly use func 'output' to output 
        // the results into output buffer.
        // void output(string &key, vector<int> &value);
        vector<int> ids;
        while (!input->done()) {
            int curr = input->value();
            if (ids.size() == 0 || ids.back() != curr) {
                ids.push_back(curr);
            }
            input->next();
        }
        output(key, ids);
    }
};
