#include<list>

class LFUCache{
public:
    // @param capacity, an integer
    LFUCache(int capacity) {
        // Write your code here
        this->capacity = capacity;
        size = 0;
    }

    // @param key, an integer
    // @param value, an integer
    // @return nothing
    void set(int key, int value) {
        // Write your code here
        if (capacity <= 0)
        {
            return;
        }
        
        if (get(key) != -1)
        {
            cacheMap[key]->val = value;
        }
        else
        {
            if (size >= capacity)
            {
                int popVal = freqMap[minFreq].back();
                Node* p = cacheMap[popVal];
                cacheMap.erase(popVal);
                delete p;
                freqMap[minFreq].pop_back();
                --size;
            }
            
            Node* node = new Node(value);
            freqMap[1].push_front(key);
            node->it = freqMap[1].begin();
            cacheMap[key] = node;
            minFreq = 1;
            ++size;
        }
    }
    
    // @return an integer
    int get(int key) {
        // Write your code here
        if (cacheMap.find(key) == cacheMap.end())
        {
            return -1;
        }
        else
        {
            Node* node = cacheMap[key];
            freqMap[node->freq].erase(node->it);
            ++(node->freq);
            freqMap[node->freq].push_front(key);
            node->it = freqMap[node->freq].begin();
            
            if (freqMap[minFreq].size() == 0)
            {
                minFreq = node->freq;
            }
            
            return node->val;
        }
    }
private:
    struct Node {
        int val;
        int freq;
        list<int>::iterator it;
        Node(): freq(1) {}
        Node(int v): val(v), freq(1) {}
    };
    int size;
    int capacity;
    int minFreq;
    unordered_map<int, Node*> cacheMap;
    unordered_map<int, list<int>> freqMap;
};
