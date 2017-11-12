class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) {
        // Initialize your data structure here
        begin = vec2d.begin();
        end = vec2d.end();
        cap = 0;
    }

    int next() {
        // Write your code here
        hasNext();
        return (*begin)[cap++];
    }

    bool hasNext() {
        // Write your code here
        while (begin != end && begin->size() == cap) {
            ++begin;
            cap = 0;
        }
        
        return begin != end;
    }
private:
    vector<vector<int>>::iterator begin, end;
    int cap;
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */
