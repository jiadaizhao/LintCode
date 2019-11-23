# 1710. Beautiful Array

Difficulty: Medium

https://www.lintcode.com/problem/beautiful-array/description

**Description**  
For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that:

For every i < j, there is no k with i < k < j such that A[k] * 2 = A[i] + A[j].

Given N, return any beautiful array A. (It is guaranteed that one exists.)

* 1 <= N <= 1000

**Example 1:**
```
Input: N = 4
Output: [1,3,2,4]
```

**Example 2:**
```
Input: N = 5
Output: [1,5,3,2,4]
```
