# 207. Interval Sum II

Difficulty: Hard

http://lintcode.com/en/problem/interval-sum-ii/

Given an integer array in the construct method, implement two methods query(start, end) and modify(index, value):

* For query(start, end), return the sum from index start to index end in the given array.
* For modify(index, value), modify the number in the given index to value

**Notice**  
We suggest you finish problem Segment Tree Build, Segment Tree Query and Segment Tree Modify first.

**Example**  
Given array A = [1,2,7,8,5].

* query(0, 2), return 10.
* modify(0, 4), change A[0] from 1 to 4.
* query(0, 1), return 6.
* modify(2, 1), change A[2] from 7 to 1.
* query(2, 4), return 14.
