# 1604. Maximum Sum of Two Numbers

Difficulty: Medium

https://www.lintcode.com/problem/maximum-sum-of-two-numbers/description

**Description**  
Given an array A consisting of N integers, returns the maximum sum of two numbers whose digits add up to an equal sum. if there are not two numbers whose digits have an equal sum, the function should return -1.

* N is integer within the range [1, 200000]
* each element of array A is an integer within the range [1, 1000000000]

**Example 1:**
```
Input:
A = [51, 71, 17, 42]
Output: 93
Explanation: There are two pairs of numbers whose digits add up to an equal sum: (51, 42) and (17, 71), The first pair sums up  to 93
```

**Example 2:**
```
Input:
A = [42, 33, 60]
Output: 102
Explanation: The digits of all numbers in A add up the same sum, and choosng to add 42 and 60 gives the result 102
```

**Example 3:**
```
Input:
A = [51, 32, 43]
Output: -1
Explanation: All numbers in A have digits that add up to different, unique sums
```
