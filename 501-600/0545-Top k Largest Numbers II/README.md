# 545. Top k Largest Numbers II

Difficulty: Medium

http://www.lintcode.com/en/problem/top-k-largest-numbers-ii/

Implement a data structure, provide two interfaces:

1. add(number). Add a new number in the data structure.
2. topk(). Return the top k largest numbers in this data structure. k is given when we create the data structure.

**Example**  
```
s = new Solution(3);
>> create a new data structure.
s.add(3)
s.add(10)
s.topk()
>> return [10, 3]
s.add(1000)
s.add(-99)
s.topk()
>> return [1000, 10, 3]
s.add(4)
s.topk()
>> return [1000, 10, 4]
s.add(100)
s.topk()
>> return [1000, 100, 10]
```
