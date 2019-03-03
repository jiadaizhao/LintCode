# 1021. Number of Subarrays with Bounded Maximum

Difficulty: Medium

https://www.lintcode.com/problem/number-of-subarrays-with-bounded-maximum/description

**Description**  

We are given an array A of positive integers, and two positive integers L and R (L <= R).

Return the number of (contiguous, non-empty) subarrays such that the value of the maximum array element in that subarray is at least L and at most R.

1. L, R and A[i] will be an integer in the range [0, 10^9].
2. The length of A will be in the range of [1, 50000].

**Example**  
```
Example :
Input: 
A = [2, 1, 4, 3]
L = 2
R = 3
Output: 3
Explanation: There are three subarrays that meet the requirements: [2], [2, 1], [3].
```
