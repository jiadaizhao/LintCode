#include<list>

class LRUCache{
public:
    // @param capacity, an integer
    LRUCache(int capacity) {
        // write your code here
        this->capacity = capacity;
    }
    
    // @return an integer
    int get(int key) {
        // write your code here
        if (cacheMap.find(key) == cacheMap.end())
        {
            return -1;
        }
        
        cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
        cacheMap[key] = cacheList.begin();
        return cacheList.begin()->second;
    }

    // @param key, an integer
    // @param value, an integer
    // @return nothing
    void set(int key, int value) {
        // write your code here
        if (get(key) == -1)
        {
            if (capacity == cacheList.size())
            {
                cacheMap.erase(cacheList.back().first);
                cacheList.pop_back();
            }
            
            cacheList.push_front({key, value});
            cacheMap[key] = cacheList.begin();
        }
        else
        {
            cacheList.begin()->second = value;
        }
    }
private:
    int capacity;
    list<pair<int, int>> cacheList;
    unordered_map<int, list<pair<int, int>>::iterator> cacheMap;
};
