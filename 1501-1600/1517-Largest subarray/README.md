# 1517. Largest subarray

Difficulty: Easy

https://www.lintcode.com/problem/largest-subarray/description

**Description**  
Given a array A consisting of N integers and an integer K,
return the largest contiguous subarray from all the contiguous subarrays of length K.

We defined that subarray A is greater than subarray B if the first non-matching element in both arrays has a greater value in A than in B.

For example,A=[1,2,4,3],B=[1,2,3,5].

A is greater than B because A[2]>B[2].

* 1<=K<=N<=100
* 1<=A[i]<=1000

**Example 1:**
```
Input:
[1,4,3,2,5]
4
Output:
[4,3,2,5]
Explanation:
there are two subarrays of size 4:
[1,4,3,2]and [4,3,2,5].
So the largest subarray is [4,3,2,5].
```

**Example 2:**
```
Input:
[7,1,2,7,9,2,3,1,2,5]
4
Output:
[9,2,3,1]
```
