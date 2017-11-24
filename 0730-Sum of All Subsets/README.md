# 730. Sum of All Subsets

Difficulty: Easy

http://www.lintcode.com/en/problem/sum-of-all-subsets/

Given a number n, we need to find the sum of all the elements from all possible subsets of a set formed by first n natural numbers.

**Example**  
```
Given n = 2, return 6
Possible subsets are {{1}, {2}, {1, 2}}. Sum of elements in subsets
is 1 + 2 + 1 + 2 = 6

Given n = 3, return 24
Possible subsets are {{1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}
Sum of subsets is : 
1 + 2 + 3 + (1 + 2) + (1 + 3) + 
(2 + 3) + (1 + 2 + 3)
```
