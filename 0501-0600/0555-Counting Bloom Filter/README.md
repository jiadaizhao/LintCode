# 555. Counting Bloom Filter

Difficulty: Medium

http://www.lintcode.com/en/problem/counting-bloom-filter/

Implement a counting bloom filter. Support the following method:
1. add(string). Add a string into bloom filter.
2. contains(string). Check a string whether exists in bloom filter.
3. remove(string). Remove a string from bloom filter.

**Example**  
```
CountingBloomFilter(3) 
add("lint")
add("code")
contains("lint") // return true
remove("lint")
contains("lint") // return false
```
