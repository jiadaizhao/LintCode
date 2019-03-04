# 960. First Unique Number in a Stream II

Difficulty: Medium

http://www.lintcode.com/en/problem/first-unique-number-in-a-stream-ii/

We need to implement a data structure named DataStream. There are two methods required to be implemented:

1. void add(number) // add a new number
2. int firstUnique() // return first unique number

**Notice**  
You can assume that there must be at least one unique number in the stream when calling the firstUnique.

**Example**  
```
add(1)
add(2)
firstUnique() => 1
add(1)
firstUnique() => 2
```
