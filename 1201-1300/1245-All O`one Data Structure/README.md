# 1245. All O`one Data Structure

Difficulty: Hard

https://www.lintcode.com/problem/all-oone-data-structure/description

**Description**  
Implement a data structure supporting the following operations:

* Inc(Key) - Inserts a new key with value 1. Or increments an existing key by 1. Key is guaranteed to be a non-empty string.
* Dec(Key) - If Key's value is 1, remove it from the data structure. Otherwise decrements an existing key by 1. If the key does not exist, this function does nothing. Key is guaranteed to be a non-empty string.
* GetMaxKey() - Returns one of the keys with maximal value. If no element exists, return an empty string "".
* GetMinKey() - Returns one of the keys with minimal value. If no element exists, return an empty string "".

**Example**  
Example 1:
```
Input:
AllOne()
inc("hello")
getMaxKey()
getMinKey()
Output:
["hello","hello"]
```

**Challenge**  
Perform all these in O(1) time complexity.
