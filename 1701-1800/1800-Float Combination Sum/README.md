# 1800. Float Combination Sum

Difficulty: Medium

https://www.lintcode.com/problem/float-combination-sum/description

**Description**  
Given an array of A, a non-negative integer target. Each decimal in A needs to be operated by ceil or floor, and finally an integer array is obtained, requiring the sum of all integers that are in the array to be equal to target, and requiring adjustments sum of the decimal array is minimum.

Such as ceil(1.2),adjustment is 0.8,floor(1.2),adjustment is 0.2. return the integer array.

1. 1<=A.length<=300
2. 0<=target<=15000
3. 0.0<=A[i]<=100.0
4. Datas guarantees the existence of answers.

**Example 1:**
```
Input：A=[1.2,1.3,2.3,4.2],target=9
Output：[1,1,3,4]
Explanation：1.2->1,1.3->1,2.3->3,4.2->4.
```

**Example 2:**
```
Input：A=[2.5,2.5],target=5
Output：[2,3]
Explanation：2.5->2,2.5->3.
```
