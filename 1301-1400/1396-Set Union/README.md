# 1396. Set Union

Difficulty: Medium

https://lintcode.com/problem/set-union/description

**Description**  
There is a list composed by sets. If two sets have the same elements, merge them. In the end, there are several sets left.

**Notice**  
* tThe number of sets n <=1000.
* The number of elements for each set m <= 100.
* The element must be a non negative integer and not greater than 100000.

**Example**  
Given list = [[1,2,3],[3,9,7],[4,5,10]], return 2.
```
Explanation:
There are 2 sets of [1,2,3,9,7] and [4,5,10] left.
```
Given list = [[1],[1,2,3],[4],[8,7,4,5]], return 2.
```
Explanation:
There are 2 sets of [1,2,3] and [4,5,7,8] left.
```
