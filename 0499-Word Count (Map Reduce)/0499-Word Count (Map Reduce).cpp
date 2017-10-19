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
class WordCountMapper: public Mapper {
public:
    void Map(Input<string>* input) {
        // Write your code here
        // Please directly use func 'output' to 
        // output the results into output buffer.
        // void output(string &key, int value);
        while (!input->done())
        {
            stringstream ss(input->value());
            string s;
            while (getline(ss, s, ' '))
            {
                output(s, 1);
            }
            input->next();
        }
    }
};


class WordCountReducer: public Reducer {
public:
    void Reduce(string &key, Input<int>* input) {
        // Write your code here
        // Please directly use func 'output' to 
        // output the results into output buffer.
        // void output(string &key, int value);
        int sum = 0;
        while (!input->done())
        {
            sum += input->value();
            input->next();
        }
        output(key, sum);
    }
};
